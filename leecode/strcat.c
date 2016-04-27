#include <stdio.h>

char * func (char *s1, char *s2)
{
	char *tmp;
	tmp  = s1;

	for (;*s1 != '\0';s1++);

	while (*s1 ++ = *s2++);
	return tmp;
}	


int main (void)
{
	char s1[] = "hello";
	char s2[] = "world";
	char *result;
	result = func(s1, s2);
	printf ("%s\n", result);
 	return 0;
}