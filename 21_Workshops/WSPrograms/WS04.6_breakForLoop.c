#include <stdio.h>

int main(int argc, char *argv[])
{
	int startValue = 1;
	int endValue 	= 999;
	
	int maxSum	= 555;	
	int sum = 0;
	int i = 0; 		// declared outside for-loop!!
	
	for(i = startValue; i < endValue; i++)
	{
		if(sum > maxSum)
		{			
			break;		
		}
		sum = sum + i;
	}
	printf("With max. sum %d, the integers from 1 to %d sum to %d\n",
		 maxSum, i, sum);	
	return 0;
}
