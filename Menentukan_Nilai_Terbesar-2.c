#include <stdio.h>
//Menentukan Nilai Terbesar Bagian-2
int main (){
	int angka1,angka2,angka3;
	printf("Masukkan Angka1: ");
	scanf("%d %d %d",&angka1,&angka2,&angka3);		//Atau Digabung Menjadi 1 Yang Ditampung Pada Fungsi scanf Pertama
//	printf("Masukkan Angka2: ");
//	scanf("%d",&angka2);
//	printf("Masukkan Angka3: ");
//	scanf("%d",&angka3);

	if (angka1 >= angka2){
		if (angka1 >= angka3){
		printf("%d Merupakan Angka Tertinggi 1",angka1);
		}
	else {
		printf("%d Merupakan Angka Tertinggi 3",angka3);
		}
	}
	else {
	if (angka2 >= angka3){
		printf("%d Merupakan Angka Tertinggi 2",angka2);
		}
	else {
		printf("%d Merupakan Angka Tertinggi 3",angka3);
		}
	}
	return 0;
}
