#include <stdio.h>
#include <stdlib.h>  // for EXIT_SUCCESS

/* compute the bionmial coefficient of two numbers */

// prototypes
long nChooseK( int n, int k);
long factorial(int n);


int main( int argc, char* argv[] )
{
    int n = 0, k = 0, waitOnValidInput = 1;
	while(waitOnValidInput){
	    printf("computation of n choose k\n");
	    printf("-------------------------\n");
	    printf("Enter two integers n and k >= 0, with k <= n: ");
    	scanf("%d %d",&n, &k);
		if(n >= 0 && k >= 0 && n >= k ) {
		    printf("%d choose %d = %ld\n", n, k, nChooseK(n, k));
			break;
		}
		else
		{
			printf("Invalid input. Try again.\n");
		}
	}
	return EXIT_SUCCESS;
}

// implementation of the nChooseK function
long nChooseK( int n, int k) {
	long nChooseKResult = 0;
	nChooseKResult = (factorial(n)/(factorial(k)*factorial(n-k)));
	return nChooseKResult;
}	


// implementation of the factorial function
long  factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}


