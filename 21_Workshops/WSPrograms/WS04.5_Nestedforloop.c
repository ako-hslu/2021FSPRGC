#include <stdio.h>

int main() {

	int start = 0;
	int end = 10;

	for( int i = start; i < end; i++ )
	{
		for( int k = start+1; k <= end; k++)
		{
			printf("%d ", i*10+k); 
		}
		printf("\n");
	}

	return 0;
}


