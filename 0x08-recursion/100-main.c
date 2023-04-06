#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	char *s;
	s = (char *)malloc(10*sizeof(char));
	strcpy(s,"level");
	r = is_palindrome(s);
	printf("%d\n", r);
/**    r = is_palindrome("level");
 *   printf("%d\n", r);
  *  r = is_palindrome("redder");
   * printf("%d\n", r);
   * r = is_palindrome("test");
   * printf("%d\n", r);
   * r = is_palindrome("step on no pets");
   * printf("%d\n", r);
   */ return (0);
}
