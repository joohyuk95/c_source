#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 40, 10, 100, 30, 20, 60, 70, 80, 90};
	
	int max;
	max = nums[0];
	for (int i = 1; i < 10; ++i) {
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	
	printf("max: %d\n", max);
	return 0;
}
