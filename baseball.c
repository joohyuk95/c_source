#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3]; 
	int answer[3]; 
	
	srand(time(NULL));
	question[0] = rand() % 9 + 1;
	
	do {
		question[1] = rand() % 9 + 1;
	} while (question[0] == question[1]);

	do {
		question[2] = rand() % 9 + 1;
	} while (question[0] == question[2] || question[1] == question[2]);
	
	printf("question: %d %d %d\n", question[0], question[1], question[2]);
	
	int count = 0;
	while (1) { 
		++count;
		
		int strike = 0;
		int ball = 0;
		
		printf("guess the question :");  // input guess
		for (int i = 0; i < 3; ++i) 
			scanf("%d", &answer[i]);
			
		for (int i = 0; i < 3; ++i) {  // compare
			for (int j = 0; j < 3; ++j) { 
				if (question[i] == answer[j]) {
					if (i == j)
						++strike;
					else
						++ball;
				}
			}
		}	
	
		
		printf("strike = %d\nball = %d\n\n", strike, ball);		
		
		if (strike == 3)
			break;
	}

	printf("congraturation, your count: %d\n", count);
	return 0;
}
