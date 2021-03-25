#include <stdio.h>
#include <stdlib.h>	// for random number generator


int main(int argc, char* argv[] ){
/*
	int myRandomNumber = 0;
	int MY_LIMIT = 30;
	
	// this call generates a random number between
	// 0 and RAND_MAX. RAND_MAX is a system variable, garanteed
	// to be larger than 32767
	myRandomNumber = rand();
	
	// this call generates a random number 
	// between 0 and (MY_LIMIT-1)
	// Example: rand() % 100 generates a random number between 0 and 99
	myRandomNumber = rand() % MY_LIMIT;
	
	// and here between 1 and MY_LIMIT
	myRandomNumber = (rand() % MY_LIMIT) + 1;
	
	*/
	for(int i = 1; i < 200; i++ )
	{
		if( i % 11 == 0 )
		{
			if( i % 7 == 0)
			{
				printf("11 and 7: %d\n", i );	
			}
			else
			{
				printf("11 but not 7: %d\n", i );
			}
		}
	}
	
		

	return 0;
} 
