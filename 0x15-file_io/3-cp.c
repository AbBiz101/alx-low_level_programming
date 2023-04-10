#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define BUF_SIZE 1024

/**
  * exitWithError - error-handling function
  * @msg: message string
  * Return: calls exit with EXIT_FAILURE.
  */

void exitWithError(char *msg)
{
dprintf(STDERR_FILENO, "Error: %s\n", msg);
exit(EXIT_FAILURE);
}

/**
  * main - copy one file to another
  * @argc: list of arguments
  * @argv: array of arguments
  * Return: 0.
  */

int main(int argc, char **argv)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(EXIT_FAILURE);
}
char *file_from = argv[1];
char *file_to = argv[2];
int fd_from;
int fd_to;
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
	exitWithError("Can't read from file");
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
exitWithError("Can't write to file");
}
ssize_t nread;
char buf[BUF_SIZE];
while ((nread = read(fd_from, buf, BUF_SIZE)) > 0)
{
ssize_t nwritten = write(fd_to, buf, nread);
if (nwritten == -1)
{
close(fd_from);
close(fd_to);
exitWithError("Can't write to file");
}
}
if (nread == -1)
{
close(fd_from);
close(fd_to);
exitWithError("Can't read from file");
}
if (close(fd_from) == -1)
	exitWithError("Can't close fd");
if (close(fd_to) == -1)
	exitWithError("Can't close fd");
exit(EXIT_SUCCESS);
}
