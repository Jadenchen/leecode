#include <string.h>

unsigned char val  = 0x3;

int main (void)
{
	long long len;

	len = val << 8;
	printf("%x\n", len);
	len = ~val;
	printf ("%x\n", len);
	//printf(" \n");

	return 0;
}