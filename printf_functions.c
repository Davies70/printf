#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
  * found_char - converts a char to a string
  * @c: char to convert
  * Return: 2 byte string
  */
char *found_char(va_list c)
{
	char string[2];
	char *p;

	p = string;
	string[0] = va_arg(c, int);
	string[1] = '\0';
	return (p);
}
/**
  * found_string - passes a string through
  * @s: string to pass through
  * Return: unmodified string
  */
char *found_string(va_list *s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
		return ("(null)");
	return (string);
}
/**
  * found_percent - passes a % sign through
  * Return: percent sign as a character string
  */
char *found_percent(void)
{
	char *string;

	string = "%";
	return (string);
}