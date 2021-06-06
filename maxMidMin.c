#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int max, mid, min;
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1 > num2) {
		if (num3 > num1) {
			printf("max: %d mid: %d min: %d\n", num3, num1, num2);
		} else if (num3 > num2) {
			printf("max: %d mid: %d min: %d\n", num1, num3, num2);
		} else {
			printf("max: %d mid: %d min: %d\n", num1, num2, num3);
		}
	}  	else {
		  if (num3 > num2)
		 	printf("max: %d mid: %d min: %d\n", num3, num2, num1);
		  else if (num3 > num1)
		 	printf("max: %d mid: %d min: %d\n", num2, num3, num1);
		  else
		 	printf("max: %d mid: %d min: %d\n", num2, num1, num3);
	}
	
	return 0;
}
