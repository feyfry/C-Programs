#include <stdio.h>
//Menghitung Konversi Temperatur

int main (){
	float celcius,fahrenheit;
	printf("------- Masukkan Nilai Suhu -------\n");
	printf("Masukkan Nilai Celcius (c): ");
	scanf ("%f",&celcius);
	{
		fahrenheit = ((celcius*9/5) + 32);
		printf ("Konversi dalam Fahrenheit (f): %f \n",fahrenheit);
	}
	printf("\n-------------Dan--------------\n");
	printf("Masukkan Nilai Fahrenheit (f): ");
	scanf ("%f",&fahrenheit);
	{
		celcius = ((fahrenheit-32)*5)/9;
		printf ("Konversi dalam Celcius (c): %f \n",celcius);
	}
	
	return 0;
}
