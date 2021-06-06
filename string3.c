#include <stdio.h>
#include <string.h>


int main(void)
{
	const char *str1 = "hello, world";
	
	int len = strlen(str1);
	printf("len: %d\n", len);
	
	// char *str2		-> no directing
	// char str[12] -> size small!
	char str2[20];
	
	
	strcpy(str2, str1);
	printf("str2: %s\n", str2);
	
	if (strcmp(str1, str2) == 0)
		printf("str1 and str2 are equal\n");
	else
		printf("str1 and str2 are not equal\n");
	
	strcat(str2, " ");		// concatination
	strcat(str2, "Park");
	//strcat(str2, "JungSeok");
	
	printf("str2: %s\n", str2);
	
	return 0;
}
