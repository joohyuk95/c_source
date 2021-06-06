#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int winNum[7];
	srand(time(NULL));
	
	while (1) { 
		int count = 0;
		int check = 0;
		
		for (int i = 0; i < 7; ++i) 
			winNum[i] = rand() % 45 + 1;
		
		for (int i = 0; i < 6; ++i) {
			for (int j = i+1; j < 7; ++j) {
				++count;
				if (winNum[i] == winNum[j]) 
					break;
				else
					++check; 
			}
		} 
		if (count == check)
			break;
	} 
	printf("win numbers :");
	for (int i = 0; i < 6; ++i)
		printf("%d%c", winNum[i], (i < 5) ? ',' : '\n');
	printf("bonus : %d\n", winNum[6]);
		
	return 0;
}
