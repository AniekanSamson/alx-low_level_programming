#include "main.h"

/**
 *_strlen -  return length of string
 * @s : string value whose length we have to find
 * Return : length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{

		count++;
		s++;
	}

	return (count);
}
