#include "main.h"

/**
 * main - copy one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, or exit with error code
 */

int main(int argc, char *argv[])
{
int fd_from, fd_to, nread, nwrite;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return (EXIT_FAILURE);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (EXIT_FAILURE);
}
fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
return (EXIT_FAILURE);
}
while ((nread = read(fd_from, buffer, sizeof(buffer))) > 0)
{
nwrite = write(fd_to, buffer, nread);
if (nwrite != nread)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
close(fd_to);
return (EXIT_FAILURE);
}
}
if (nread == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(fd_from);
close(fd_to);
return (EXIT_FAILURE);
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
return (EXIT_FAILURE);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
return (EXIT_FAILURE);
}
return (EXIT_SUCCESS);
}
