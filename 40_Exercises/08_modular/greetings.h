
#ifndef _GREETINGS_H_
#define _GREETINGS_H_


struct Student {
	char name [24];
	int studentId;
};

struct Prof {
	char name[12];
	int salary;
};




/* global variables: exposition to outside */
extern int greetingsCounter;


/* declarations of public functions */
//void SayHello(void);
//void SayGoodBye(void);


#endif
