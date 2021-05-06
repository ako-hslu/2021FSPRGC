#include <stdio.h>
#include <time.h>


int main(){

	clock_t starttime = clock();
	long long blah = 0;
	
	for(long long i = 0; i < 9999999999; i++ )
	{
		blah = blah << 2;
	}
	
	/*Do something*/
	clock_t endtime = clock();
	float seconds = (float)(endtime - starttime) / CLOCKS_PER_SEC;	
	printf("%.6f\n", seconds); 
return 0;
}
