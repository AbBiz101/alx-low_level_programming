#include <unistd.h>
/**
 * main - Entry point
 * Return: 1 if Success
 */
int main(void)
{
const char *txt = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
const int length = 54;
write(STDERR_FILENO, txt, length);
return (1);
}
