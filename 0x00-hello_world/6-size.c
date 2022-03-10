#include <stdio.h>

/**
 * main - print the size of type
 *
 * Return: Always
 */

int main(void)
{
printf("Size of char: %d byte(s)", sizeof(char));
printf("\nSize of an int: %d byte(s)", sizeof(int));
printf("\nSize of a long int: %d byte(s)", sizeof(long int));
printf("\nSize of long long init: %d byte(s)", sizeof(long long int));
printf("\nSize of a float: %d byte(s)", sizeof(float));
return (0);
}
