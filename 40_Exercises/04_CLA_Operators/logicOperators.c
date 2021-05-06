#include <stdio.h>
#include <stdlib.h>

const int NUM_VALUES = 3;

int main(int argc, char *argv[] )
{
	// falls NICHT 4 argumente erhalten, dann --> Block 7 bis 10
	if( argc != NUM_VALUES + 1 ) // + 1 because program call is argv[0]
	{	
		// input not valid
		printf("Usage:\n");
		printf("logicOperators Input1 Input2 Input3\n");
	} 
	else  
	{	// input is valid --> genau 1 + 3  argumente erhalten
		int val1 = atoi(argv[1]);
		int val2 = atoi(argv[2]);
		int val3 = atoi(argv[3]);
		int sum = 0;
		float average = 0.0f;
		
		printf("%d, %d, %d\n", val1, val2, val3);
		
		if( !(val1 > 0) || !(val2 > 0) || !(val3 > 0) )
		{
			// Fehlerfall
			printf("All inputs must be strictly greater than zero.\n");
		}
		else
		{
			// find the greatest 
			if( val1 >= val2 && val1 >= val3 )
			{
				printf("%d is the greatest\n", val1);	
			} 
			else if( val2 >= val1 && val2 >= val3 )
			{
				printf("%d is the greatest\n", val2);
			}	
			else
			{
				printf("%d is the greatest\n", val3);
			}
			
			// find the smallest
			if( val1 <= val2 && val1 <= val3 )
			{
				printf("%d is the smallest\n", val1);	
			} 
			else if( val2 <= val1 && val2 <= val3 )
			{
				printf("%d is the smallest\n", val2);
			}	
			else
			{
				printf("%d is the smallest\n", val3);
			}
			
			// compute the sum 
			sum = val1 + val2 + val3;
			printf("The sum is: %d\n", sum );
			
			// compute the average
			average = (float)sum/NUM_VALUES;
			printf("The average is: %.2f\n", average);
			
		}
	}	
			
#if 0	// auskommentieren mit Präprozessor	
		if( 
	
		printf("Number of input arguments: %d\n", argc ); // anzahl args. printen
	
		// die drei Elemente in der For-Loop Deklaration
		// ---------------------------------------------
		// nimm eine int-variable i und starte mit 0.
		// führe folgenden Code aus, solange i < argc
		// inkrementiere i bei jedem Durchlauf um 1 (++).	
	
		for( int i = 0; i < argc; i++ )  
		{
			printf("Argument %d was %s\n", i, argv[i]);
			
			// argv: 	- ./logicOperators
			// 			-  23
			//			-  99
		}
	}
#endif
	return 0;
}




/*
	double e = 2.718281828;

	printf("%0.15f", e);
*/
