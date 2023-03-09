                                                     m????  vvvv//nama file : FaktorBil
// Deskrpsi : menentukan mennetukan apakah bilangan N adalah prima atau bukan
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 6 maret 2023

#include <stdio.h>

int FaktorBil(){
    // kamus lokal
    int N ; // bilangan sembarang postif
    int i ; // counter

    // algoritma
    printf("masukkan N : ");
    scanf("%d", &N);

    for(i = 1 ; i <= N ; i++ ){
        if (N % i == 0){
            printf("%d", i);
        }
    }
}
