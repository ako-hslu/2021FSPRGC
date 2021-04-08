#include <stdio.h>

// function declaration!
// float* area means we are passing the address of the variable area
void ComputeCircleArea(float radius, float* area);


int main()
{
	float myRadius = 4.545;
	float area = 0.0f;
	// pass the address of the area using '&'
	ComputeCircleArea(myRadius, &area);
	printf("Given radius %.3f, the area equals %.3f\n", myRadius, area);
	return 0;
}

// function implementation
void ComputeCircleArea(float radius, float* area)
{
	// *area means we are modifying the value at the address 'area'
	*area = radius*radius*3.1415926535;
}
