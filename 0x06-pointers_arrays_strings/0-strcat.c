#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: char pointer variable
 * @src: char pointer variabe
 * 
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, lenght = 0;

	while (*(dest + lenght) != '\0')
		lenght++;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + lenght) = *(src + i);
		lenght++;
	}
	*(dest + lenght) = *(src + i);

	return (dest);
}
