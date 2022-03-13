#include <stdio.h>
//Menentukan Nilai Terbesar
int main(){
	int angka1,angka2,angka3;
	printf("Masukkan Angka1: ");
	scanf("%d",&angka1);
	printf("Masukkan Angka2: ");
	scanf("%d",&angka2);
	printf("Masukkan Angka3: ");
	scanf("%d",&angka3);
	
	if(angka1 >= angka2 && angka1 >= angka3){
		printf("%d Merupakan Nilai Tertinggi 1",angka1);
		}
	else if(angka2 >= angka1 && angka2 >= angka3){
		printf("%d Merupakan Nilai Tertinggi 2",angka2);
		}
	else{
		printf("%d Merupakan Angka Tertinggi 3",angka3);
	}
	
	return 0;
}
