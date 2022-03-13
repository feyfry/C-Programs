#include <stdio.h>

int main(){
	int i=1,angka=0;
		printf("Masukkan angka: ");
		scanf("%d",&angka);
		for(i=1;i<=10;i++){
			printf("%d \n",(angka*i));
		}
		return 0;
}
