#include <stdio.h>
//Memeriksa Bilangan Positif Atau Negatif
int main(){
	int a;
	printf("Masukkan Nilai a: ");
	scanf("%d",&a);
	if (a >= 0){
		printf("%d Merupakan Bilangan Positif",a);
	}
	else {
		printf("%d Merupakan Bilangan Negatif",a);
	}
}
