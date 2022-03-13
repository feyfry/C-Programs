#include <stdio.h>

int main(){
	int i=1,angka=0;
	printf("Masukkan angka: ");
	scanf("%d",&angka);
	while(i<=10){
		printf("%d \n",(angka*i));
		i++;
	}
	return 0;
}
