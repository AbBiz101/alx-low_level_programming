#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ELF_OSABI_SYSV        0
#define ELF_OSABI_HPUX        1
#define ELF_OSABI_NETBSD      2
#define ELF_OSABI_LINUX       3
#define ELF_OSABI_SOLARIS     6
#define ELF_OSABI_IRIX        8
#define ELF_OSABI_FREEBSD     9
#define ELF_OSABI_TRU64      10
#define ELF_OSABI_ARM        97
#define ELF_OSABI_STANDALONE 255

void check_elf(unsigned char *ident);
void print_magic(unsigned char *ident);
void print_class(unsigned char *ident);
void print_data(unsigned char *ident);
void print_version(const unsigned char *header);
void print_abi(unsigned char *ident);
void print_osabi(unsigned char *ident);
void print_type(unsigned int e_type, unsigned char *ident);
void print_entry_point_address(unsigned long int e_entry, unsigned char *ident);
void close_elf(int elf);


/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: If the file is not an ELF file, prints an error message
 *              and exits with code 98.
 */
void check_elf(unsigned char *ident)
{
for (int i = 0; i < ELF_MAGIC_SIZE; i++)
{
if (ident[i] != ELF_MAGIC[i])
{
dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", g_filename);
exit(98);
}
}
}

/**
 * print_hex_with_spaces - Prints a hex value with a space after it.
 * @value: The hex value to print.
 * Description: Used by print_magic() to print hex values with spaces.
 */
void print_hex_with_spaces(unsigned char value)
{
printf("%02x ", value);
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @ident: A pointer to an array containing the ELF magic numbers.
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *ident)
{
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; ++i)
	print_hex_with_spaces(ident[i]);
printf("\n");
}

/**
 * print_class - Prints the class of an ELF header.
 * @ident: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *ident)
{
const char *class_str;
switch (ident[EI_CLASS])
{
case ELFCLASSNONE:
	class_str = "none";
	break;
case ELFCLASS32:
	class_str = "ELF32";
	break;
case ELFCLASS64:
	class_str = "ELF64";
	break;
default:
	class_str = "<unknown>";
}
printf("  Class:                             %s\n", class_str);
}

/**
 * print_data - Prints the data of an ELF header.
 * @ident: A pointer to an array containing the ELF data.
 */
void print_data(unsigned char *ident)
{
printf("  Data:                              ");
const char *data_type;
switch (ident[EI_DATA])
{
case ELFDATANONE:
	data_type = "none";
	break;
case ELFDATA2LSB:
	data_type = "2's complement, little endian";
	break;
case ELFDATA2MSB:
	data_type = "2's complement, big endian";
	break;
default:
	data_type = "<unknown>";
}
printf("%-34s%s\n", data_type, "(data encoding scheme)");
}

/**
 * print_version - Prints the version of an ELF header.
 * @header: A pointer to an array containing the ELF header.
 */
void print_version(const unsigned char *header)
{
printf("  Version:                           %d\n", header[EI_VERSION]);
switch (header[EI_VERSION])
{
case EV_CURRENT:
	printf("    Current version\n");
	break;
}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @ident: A pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *ident)
{
printf("  OS/ABI:                            ");
switch (ident[EI_OSABI])
{
case ELFOSABI_NONE:
	printf("UNIX - System V\n");
	break;
case ELFOSABI_HPUX:
	printf("UNIX - HP-UX\n");
	break;
case ELFOSABI_NETBSD:
	printf("UNIX - NetBSD\n");
	break;
case ELFOSABI_LINUX:
	printf("UNIX - Linux\n");
	break;
case ELFOSABI_SOLARIS:
	printf("UNIX - Solaris\n");
	break;
case ELFOSABI_IRIX:
	printf("UNIX - IRIX\n");
	break;
case ELFOSABI_FREEBSD:
	printf("UNIX - FreeBSD\n");
	break;
case ELFOSABI_TRU64:
	printf("UNIX - TRU64\n");
	break;
case ELFOSABI_ARM:
	printf("ARM\n");
	break;
case ELFOSABI_STANDALONE:
	printf("Standalone Application\n");
	break;
default:
	printf("Unknown OS/ABI (0x%x)\n", ident[EI_OSABI]);
	break;
}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *ident)
{
printf("  ABI Version:                       %d\n",
		ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @ident: A pointer to an array containing the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *ident)
{
printf("  Type:                              ");
switch (e_type)
{
case ET_NONE:
	printf("NONE (None)\n");
	break;
case ET_REL:
	printf("REL (Relocatable file)\n");
	break;
case ET_EXEC:
	printf("EXEC (Executable file)\n");
	break;
case ET_DYN:
	printf("DYN (Shared object file)\n");
	break;
case ET_CORE:
	printf("CORE (Core file)\n");
	break;
default:
	printf("<unknown: %x>\n", e_type);
	break;
}
}

/**
 * print_entry_point_address - Prints the entry point address of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @ident: A pointer to an array containing the ELF class.
 */
void print_entry_point_address(unsigned long int e_entry, unsigned char *ident)
{
printf("  Entry point address:               ");
if (ident[EI_DATA] == ELFDATA2MSB)
	e_entry = ((e_entry << 8) & 0xFF00FF00) |
		((e_entry >> 8) & 0xFF00FF) |
		(e_entry << 16) | (e_entry >> 16);
printf("%#lx\n", ident[EI_CLASS] == ELFCLASS32 ? (unsigned int) e_entry : e_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 * Description: If the file cannot be closed, an error message is displayed and the program exits with code 98.
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO,
	"Error: Could not close file descriptor %d - %s\n", elf, strerror(errno));
exit(98);
}
}
/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success, 98 on failure.
 * Description: If the file is not an ELF file or the
 *              function fails, exit with error code 98.
 */
int main(int argc, char *argv[])
{
Elf64_Ehdr header;
int fd, ret;
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s <ELF file>\n", argv[0]);
return (EXIT_FAILURE);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
return (EXIT_FAILURE);
}
ret = read(fd, &header, sizeof(header));
if (ret == -1)
{
close(fd);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
return (EXIT_FAILURE);
}
else if (ret != sizeof(header))
{
close(fd);
dprintf(STDERR_FILENO, "Error: `%s` is not an ELF file\n", argv[1]);
return (EXIT_FAILURE);
}
check_elf(header.e_ident);
printf("ELF Header:\n");
print_magic(header.e_ident);
print_class(header.e_ident);
print_data(header.e_ident);
print_version(header.e_ident);
print_osabi(header.e_ident);
print_abi(header.e_ident);
print_type(header.e_type, header.e_ident);
print_entry_point_address(header.e_entry, header.e_ident);
close(fd);
return (EXIT_SUCCESS);
}
