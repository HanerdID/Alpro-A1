/*Nama: Fikri Prasetya Nurhidayat*/
/*NIM: 24060121140153*/
/*Nama File: RumusBujurS.c*/
/*Deskripsi: menghitung luas bujur sangkar dan menampilkan hasil akhir rumus*/
#include <stdio.h>
int main(){

 int S;
 int Luas;

 printf("======Menghitung Luas Bujursangkar=======\n");
 printf("=========================================\n");
 printf("\nMasukan Sisi (S) = ");
 scanf("%d",&S);
 Luas=S*S;

 printf("\n=========================================\n");
 printf("Luas bujursangkar (S x S)==> %d X %d = %d\n",S,S,Luas);
 printf("=========================================\n");
 return 0;
}
