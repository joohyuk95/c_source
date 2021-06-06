#include <stdio.h>
int main(void)
{
	int sum = 0;

	for (int i = 1; i <= 100; i += 2) {
		sum += i;
	}
	printf("sum of odd to 100: %d\n", sum);	
	return 0;
}
