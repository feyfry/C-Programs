#include <stdio.h>

int main(){
	int i=1,angka=0;
	printf("Masukkan angka: ");
	scanf("%d",&angka);
	do{
		printf("%d \n",(angka*i));
		i++;
	}
	while (i<=10);
	return 0;
}
