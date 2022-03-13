#include <stdio.h>

int main(){
	int umur=0;
	printf("Pemilu\n");
	printf("Masukkan umur anda:");
	scanf("%d",&umur);
	if(umur==18){
		printf("Boleh Memilih");
		}
		else{
			printf("Anda belum berhak memilih");
		}
		return 0;
	}
