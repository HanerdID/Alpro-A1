/*
Nama = Fikri Prasetya Nurhidayat
NIM  = 24060121140153
Nama File = FaktorBilangan.c
Deskripsi = Menghitung faktor bilangan yang telah diberikan

*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Bilangan;
    int Counter;

    printf("Masukkan Bilangan : ");
    scanf("%d",&Bilangan);

    for(Counter = 1;Counter <= Bilangan ;Counter++)

    {
        if(Bilangan % Counter == 0)
        {
            printf(" %d",Counter);
        }
    }


    return 0;
}
