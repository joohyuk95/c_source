#include <stdio.h>

int main(void)
{
	int a = 0x12345678;
	char *p;
	
	p = (char *) &a;

	printf("%02x\n", *p);	
		
	return 0;
}
