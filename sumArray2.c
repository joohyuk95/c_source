#include <stdio.h>

int sumArray(const int *pArr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum += pArr[i]; // *(pArr + i)
	
	return sum;
}

int main(void)
{
	int nums[10] = {50, 40, 10, 100, 30, 20, 60, 70, 80, 90};
	
	int sum;
	sum  = sumArray(nums, 10);
	
	
	printf("sum: %d\n", sum);
	return 0;
}
