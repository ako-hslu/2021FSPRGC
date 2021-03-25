#include <stdio.h>

int main()
{
	int sum = 0;
	int start = 2;
	int end = 10;

	for( int i = start; i <= end; i=i+2){
		sum = sum + i;
	}
	printf("The sum of the even numbers from %d to %d is equal to %d\n",
		start, end, sum);

	return 0;
}


