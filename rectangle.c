#include <stdio.h>
int main(void)
{
	int width;
	int height;
	
	scanf("%d %d", &width, &height);
	
	int result;
	result = width * height;

	printf("Area = %d ",result);
	return 0;
}
