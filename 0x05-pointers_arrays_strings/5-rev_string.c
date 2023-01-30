#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len, i;
	/** pointers defined **/
	char *start, *end, temp;

	len = strlen(s);
	/** initiatlly set to start of string **/

	start = s;
	end = s;

	/** the end_ptr is moved to the last character **/
	for (i = 0; i < len - 1; i++)
	{
		end++;
	}
	/** swapping **/
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
