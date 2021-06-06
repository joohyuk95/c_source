#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int lotto[7];
	
	srand(time(NULL));
	
	for (int i = 0; i < 7;) {
		lotto[i] = rand() % 45 + 1;
		
		int j;
		for (j = 0; j < i; ++j) {
			if (lotto[i] == lotto[j])
				break;	
		}
		
		if (i == j)
			++i;
	}	
	
	printf("win numbers :");
	for (int i = 0; i < 6; ++i)
		printf("%d%c", lotto[i], (i < 5) ? ',' : '\n');
	printf("bonus : %d\n", lotto[6]);
		
	return 0;
}
