#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints
 *                 it to the POSIX standard output
 * @filename: a pointer to to a string of 0 and 1 chars
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *         and returns 0 if the file can not be opened or read,
 *         if filename is NULL, f write fails or does
 *         not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *buffer;
ssize_t num_read, num_written;
if (filename == NULL)
	return (0);
file = fopen(filename, "r");
if (file == NULL)
	return (0);
buffer = malloc((letters + 1) * sizeof(char));
if (buffer == NULL)
{
fclose(file);
return (0);
}
num_read = fread(buffer, sizeof(char), letters, file);
if (ferror(file) != 0 || num_read == 0)
{
free(buffer);
fclose(file);
return (0);
}
buffer[num_read] = '\0';
num_written = printf("%s", buffer);
free(buffer);
fclose(file);
if (num_written != num_read)
	return (0);
return (num_read);
}
