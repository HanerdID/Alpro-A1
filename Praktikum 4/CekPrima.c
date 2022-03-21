/*
Nama = Fikri Prasetya Nurhidayat
NIM  = 24060121140153
Nama File = CekPrima.c
Deskripsi = Mengecek apakah sebuah bilangan merupakan bilangan prima atau bukan

*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Bilangan;
    int Counter;
    int Jumlah=0;

    printf("Masukkan Bilangan : ");
    scanf("%d",&Bilangan);

    for(Counter = 1;Counter <= Bilangan ;Counter++)

    {
        if(Bilangan % Counter == 0)
        {
            Jumlah++;
        }

    }
    if(Jumlah == 2)
        {printf(" %d adalah Bilangan Prima",Bilangan);}
    else
        {printf(" %d Bukan Bilangan Prima",Bilangan);}


    return 0;
}
