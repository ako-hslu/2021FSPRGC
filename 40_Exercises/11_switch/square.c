

#include <stdio.h>

int Square( int x )
{
	return x*x;
}

float OneOver( int x )
{
	return 1.0/x;
}



int main()
{
	printf("%d\n", Square(3.2));
	printf("%d\n", Square(2));
	printf("%d\n", Square(4));
	printf("%d\n", Square(5));
	
	printf("%.2f\n", OneOver(3));
	printf("%.2f\n", OneOver(4));
	printf("%.2f\n", OneOver(5));
	printf("%.2f\n", OneOver(8));
	
	return 0;
	
}

