#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char s[26] = "0123456789abcdef";
int i;
for (i = 0; i < 26; i++)
{
putchar(s[i]);
}
putchar('\n');
return (0);
}
