#include <stdio.h>


int main(int argc, char* argv[] ){
	for(int i = 1; i < 500; i++ )
	{
		if( i % 19 == 0 )
		{
			printf("%d\n", i );	
		}
	}
	return 0;
} 
