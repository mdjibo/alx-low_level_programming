#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/**
 * Function main description
 */
int main(void)

{
	char x;

		for (x = 'A'; x <= 'z'; x++)
		{
			x = tolower(x);
			putchar(x);
		}
	/* your code goes there */
	return (0);
}
