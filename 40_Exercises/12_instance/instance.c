//  *declaration* of a struct
struct Car {
	char make[20];
	char model[20];
	float ps;
	int year;
};

// *instances* with initializations
struct Car myPrivatCar = { .make= "Fiat", .model = "Panda", .ps = 75.5, .year = 1998};
struct Car companyCar  = { .make= "VW", .model = "Transporter", .ps = 175.5, .year = 2008};	


int main() {
	return 0;
	
}





