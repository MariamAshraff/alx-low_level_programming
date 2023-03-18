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
char s[28] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
int i;
for (i = 0; i < 28; i++)
{
putchar(s[i]);
}
putchar('\n');
return (0);
}
