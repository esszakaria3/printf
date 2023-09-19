#include "holberton.h"
/**
  * print_number - we're printing some serious numbers
  * @n: that's the number, fear it.
  *
  * Return: void
  */
int  print_number(unsigned int n)
{
	int retval;
	unsigned int num = n;

	if (num / 10)
		print_number(num / 10);
	retval = _putchar('0' + num % 10);
	if (retval == -1)
	{
		return (retval);
	}
	return (retval);
}

/**
