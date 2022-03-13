#include <stdio.h>
//Menentukan Bilangan Prima

int main() {
int bil, angka, res;
 
printf("--- Program Penentu Bilangan Prima atau Bukan Bilangan Prima --- \n");
printf("Masukkan Bilangan: ");
scanf("%d", &bil);
 
if(bil <= 1) {
  printf("%d Bukan Bilangan Prima.", bil);
}
else{
  if(bil == 2){
	printf("%d Merupakan Bilangan Prima.", bil);
  }
else{
	for(angka=2; angka<bil; angka++){
    	if(bil % angka == 0){
     		res = 0;
     		break;
		}
else{
	res = 1;
    }
}
   
if(res == 0){
    printf("%d Bukan Merupakan Bilangan Prima. \n", bil);
}
else{
    printf("%d Merupakan Bilangan Prima.", bil);
}
  }
 }
 return 0;
}
