#include <stdio.h>

/**
* main - Printing alphabets from z to a using putchar function
* Retrun: Always 0 (Success)
*/

int main(void){
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
