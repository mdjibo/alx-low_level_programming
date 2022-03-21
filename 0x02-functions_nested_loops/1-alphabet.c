#include<stdio.h>
#include"main.h"
/*int main(void)*/
void print_alphabet(void)
{
	char x;
		for (x = 'A'; x <= 'z'; x++)
		{
			x = tolower(x);
			putchar(x);
		}
	return (0);
}
