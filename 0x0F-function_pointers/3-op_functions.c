#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - Performs simple operations
  * @a: Variable
  * @b: Variable
  * Return: Result of the /
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - Performs simple operation
  * @a: Variable
  * @b: Variable
  * Return: Result of the /
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - Performs simple operation
  * @a: Variable
  * @b: Variable
  * Return: Result of the /
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - Performs simple operation
  * @a: Variable
  * @b: Variable
  * Return: Result of the /
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - Performs simple operation
  * @a: Variable
  * @b: Variable
  * Return: Result of the /
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
