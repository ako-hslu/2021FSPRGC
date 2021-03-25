#include <stdio.h>

int main(int argc, char* argv[] ){
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
