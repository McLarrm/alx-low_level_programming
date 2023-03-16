#include "main.h"
#include <stdio.h>

/**
 * _prntstr - Prints a string
 * @s: String
 * Return: 0
 */
void _prntstr(char *s)
{
	while (*s)
		_putchar(*s++);
}
/**
 * numstrchk - Checks argument array for the numeric strings
 * @s: String
 * Return: Length of string
 */
long int numstrchk(char *s)
{
	long int len = 0;

	if (*s == 0)
	{
		_prntstr("Error\n");
		exit(98);
	}
	while (*s)
	{
		if ((*s < '0') || (*s > '9'))
		{
			_prntstr("Error\n");
			exit(98);
		}
		*s -= '0';
		len++;
		s++;
	}
	return (len);
}
/**
 * _calloc_buffer - Allocates a block of memory
 * @num: Number of elements
 * @size: Size of elements
 * Return: pointer to allocated space
 */
void *_calloc_buffer(long int num, long int size)
{
	void *ret;
	char *ptr;

	ret = malloc(num * size);
	if (ret == 0)
	{
		exit(98);
	}
	size = size * num;
	ptr = ret;
	ptr[--size] = 0;
	while (size--)
		ptr[size] = '0';
	return (ret);
}
/**
 * trimzero - Moves a pointer position
 * @s: String
 * Return: NULL
 */
char *trimzero(char *s)
{
	while (*s == '0')
		if (*(s + 1) != 0)
			s++;
		else
			break;
	return (s);
}
/**
 * main - Multiply two positive integers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int len1, len2, lenres, i, j;
	char *res;

	if (argc != 3)
	{
		_prntstr("Error\n");
		return (98);
	}
	argv[2] = trimzero(argv[2]);
	argv[1] = trimzero(argv[1]);
	if ((*argv == '0') || (*argv[2] == '0'))
	{
		_prntstr("0\n");
		return (0);
	}
	len1 = numstrchk(argv[1]);
	len2 = numstrchk(argv[2]);
	lenres = len1 + len2;
	res = _calloc_buffer(lenres + 1, sizeof(char));
	for (i = lenres - 1, len1--; len >= 0; len1--, i += len2 - 1)
		for (j = len2 - 1; j >= 0; j--, i--)
		{
			res[i] = (argv[1][len1] * argv[2][j] % 10) + res[i];
			res[i - 1] = (argv[1][len1] * argv[2][j] / 10) + res[i - 1];
			if (res[i] > '9')
			{
				res[i] -= 10;
				res[i - 1]++;
			}
		}
	if (*res == '0')
		_prntstr(res + 1);
	else
		_prntstr(res);
	_putchar('\n');
	free(res);
	return (0);
}
