#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char is= 1 byte\n",sizeof(char));
	printf("size of unsigned char is= 1 byte\n",sizeof(unsigned char));
	printf("size of short is= 2 bytes\n",sizeof(short));
	printf("size of unsigned short is= 2 bytes\n",sizeof(unsigned short));
	printf("size of int is= 4 bytes\n",sizeof(int));
	printf("size of unsigned int is= 4 bytes\n",sizeof(unsigned int));
	printf("size of long is= 8 bytes\n",sizeof(long));
	printf("size of unsigned long is= 8\n",sizeof(unsigned long));

	return (0);
}
