#include <stdio.h>

int main(void)
{
	char *str1 = "hello, worldf";
	printf("str1: %s\n", str1);
	
	char str2[] = "hello, world";
	printf("str2: %s\n", str2);
	
	char *str3 = "hello, worldf";
	
	printf("%p,%p, %p\n", str1, str2, str3);
	return 0;
}
