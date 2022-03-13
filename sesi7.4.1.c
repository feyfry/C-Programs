#include <stdio.h>

int main(){
	int nilai=0;
	printf("Masukkan nilai anda :");
	scanf("%d",&nilai);
	if(nilai>=85 && nilai<=100){
		printf("Nilai A");
	}
	else if(nilai>=60 && nilai<85){
		printf("Nilai B");
	}
	else if(nilai>=40 && nilai<60){
		printf("Nilai C");
	}
	else{
		printf("Tidak lulus");
	}
	return 0;
}
