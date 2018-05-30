/*
ENCABEZADO TP
*/
#include "Conversion.h"
#include <stdio.h>


void PrintTablas (void);
void PrintTablaCelsius (void);
void PrintTablaFahrenheit (void);
void PrintFilas (double (*) (double));
void PrintFila (double, double);

int main(void){
	PrintTablas();
}

void PrintTablas (void){
	PrintTablaFahrenheit ();
	PrintTablaCelsius ();
}

void PrintTablaFahrenheit (void){
	printf( "Tabla Celsius - Fahrenheit\n" );
	PrintFilas (Fahrenheit);
}

void PrintTablaCelsius (void){
	printf("Tabla Fahrenheit - Celsius\n" );
	PrintFilas (Celsius);
}

void PrintFilas (double (*funcion) (double)){
	const int LOWER = 0, 	// limite inferior
			  UPPER = 300,	// limite superior
			  STEP = 20;    // tamaño del incremento
	for (double i= LOWER; i <= UPPER; i = i + STEP ) PrintFila ( i , funcion (i) );
}	

void PrintFila (double a_convertir, double convertido){
	printf("%4.0f \t %6.1f\n", a_convertir , convertido);
}