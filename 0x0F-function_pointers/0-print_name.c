/**
 * print_name - prints a name
 * @name: a pointer to a string
 * @f: a pointer to a function
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
