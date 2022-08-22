#include "main.h"


/**
 * _err - function to check for error code
 * @stat: error code to be checked
 * Return: void
 */
void _err(int stat, ...)
{
	va_list list;

	va_start(list, stat);
	if (stat == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (stat == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(list, char *));
		exit(98);
	}
	else if (stat == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(list, char *));
		exit(99);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		dprintf(STDERR_FILENO, "%d\n", va_arg(list, int));
		exit(100);
	}
	va_end(list);
}
