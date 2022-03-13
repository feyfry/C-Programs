#include<stdio.h>
void main ()
{
    int i,n ;
    float ratarata, jumlah, x;
    printf("Program C Menghitung Nilai Rata-rata\n");
    printf("------------------------------------\n");
    printf ("Masukkan banyak data : "); //Masukkan 3
    scanf ("%d",&n);
    jumlah=0; i=1;
    while (i<=n)
    {
        printf ("Masukkan nilai data ke- %d: ",i);
        scanf ("%f",&x);
        jumlah=jumlah+x;
        i++;
    }
    ratarata=jumlah/n;
    printf("------------------------------------\n");
    printf("Jumlah dari nilai data tersebut: %f\n", jumlah);
    printf("rata-rata: %f",ratarata);
}
