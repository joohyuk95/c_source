#include <stdio.h>
int main(void)
{
	int man, woman;
	printf("input number of man, woman : ");
	scanf("%d %d", &man, &woman);
	
	double manRatio, womanRatio;
	//manRatio = 1.0 * man / (man + woman) * 100;
	//womanRatio = 100 - manRatio;
	manRatio = (double)man / (man + woman) * 100;
	womanRatio = (double)woman / (man + woman) * 100;
	
	printf("manRatio: %.2f%%, womanRatio: %.2f%%\n", manRatio, womanRatio);
	
	return 0;
}
