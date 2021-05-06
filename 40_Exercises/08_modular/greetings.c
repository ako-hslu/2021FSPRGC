/* system includes */
#include <stdio.h>


/* project includes */
#include "greetings.h"


/* globale variable: declaration + init */
int greetingsCounter = 0;

/* local variable */
int localCounter = 24;

/* private function */
void IncrementGreetingsCounter( void ) {
	greetingsCounter++;
}


/* implementations */
void SayHello(void) {
	printf("Hello!\n");
	IncrementGreetingsCounter();
}



void SayGoodBye(void) {
	printf("Goodbye!!\n");
	IncrementGreetingsCounter();
}


