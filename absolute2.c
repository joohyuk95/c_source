#include <stdio.h>

int main(void)
{
	int num;
	printf("input any integer you want :");
	scanf("%d", &num);
	
	int absoluteValue;
	if (num >= 0) {
		absoluteValue = num;
	} else {
		absoluteValue = -num;
	}
	
	printf("absolute vale : %d\n", absoluteValue);
	
	return 0;
}
