#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
/*	if (num % 2) {
		printf("%d is a odd number\n", num);
	} else {
		printf("%d is a even number\n", num);
	}
*/
	printf("%d is a %s number\n", num, (num % 2) ? "odd" : "even");
	return 0;
}
