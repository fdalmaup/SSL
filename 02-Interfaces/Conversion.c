#include "Conversion.h"

double Celsius (double fahr) {        /*convierte a Celsius*/
	return ((5.0/9.0) * (fahr - 32));
}
double	Fahrenheit (double celsius){  /*convierte a Fahrenheit*/
	return (celsius * (9.0/5.0) + 32);
}