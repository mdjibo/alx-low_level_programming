#include<stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled
 *
 * Description: print size of variables in memory depending of computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
long int longintType;
long long int longlongintType;
char charType;

printf("Size of char: %zu byt(e)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
