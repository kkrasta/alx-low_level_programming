#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if a number is in upper or lower case
 * main - entry point of the program
 * Return: 1 if c is uppercase or 0 if otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
