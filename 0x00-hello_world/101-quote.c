#include <unistd.h>
/**
 * main - Entry point
 * Return: 1 if Success
 */
int main(void)
{
char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(2, txt, sizeof(txt));
return (1);
}
