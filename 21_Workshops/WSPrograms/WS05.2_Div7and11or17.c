#include <stdio.h>


int main(int argc, char* argv[] ){
	for(int i = 1; i < 200; i++ )
	{
		if( i % 7 == 0 && i % 11 == 0 )
		{
			printf("7 and 11: %d\n", i );	
		}
		else if ( i % 17 == 0 )
		{
		
			printf("17: %d\n", i );
		}
	}
	return 0;
} 
