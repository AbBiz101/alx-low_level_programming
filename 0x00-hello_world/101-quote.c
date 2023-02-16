#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * *
 * Return: 1 if Success
 * *
 */
int main(void)
{
char message[] = "and that piece of art is
useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, sizeof(message));
return (1);
}
