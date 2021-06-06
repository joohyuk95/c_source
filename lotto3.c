#include <stdio.h>


int main(void)
{
	int nums[6] = {11, 42, 36, 9, 45, 21};
	int bonus;
	printf("bonus num = ");
	scanf("%d", &bonus);	

	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 6; ++j) {
			if (i == j)
				printf("%d ", bonus);
			else
				printf("%d ", nums[j]);
		}
		printf("\n");
	}
	return 0;
}
