#include <stdio.h>
//Menghitung Untung dan Rugi
int main (){
	int biaya,pendapatan,laba;
	printf ("Masukkan Jumlah Biaya: ");
	scanf ("%d",&biaya);
	printf ("Masukkan Jumlah Pendapatan: ");
	scanf ("%d",&pendapatan);
	
	if (pendapatan > biaya) {
		laba = pendapatan - biaya;
		printf ("Anda Mendapatkan Laba Sebesar: %d");
		}
	else if (pendapatan < biaya) {
		laba = biaya - pendapatan;
		printf ("Anda Mendapatkan Rugi Sebesar: %d");
	}
	else {
		printf ("Anda Tidak Mendapatkan Laba Dan Rugi \n");
	}
	return 0;
}
