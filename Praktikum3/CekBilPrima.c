// Deskrpsi : menentukan hasil dari penjumlahan deret
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 6 maret 2023

#include <stdio.h>

int CekBilPrima(){
    // kamus lokal
    int N ; // bilangan sembarang postif
    int i ; // counter
    int hasil; // hasil penentu

    // algoritma
    printf("masukkan N : ");
    scanf("%d", &N);
    hasil = 0 ;
    for(i = 1 ; i <= N ; i++ ){
        if (N % i == 0){
            hasil = hasil + 1 ;
        }
    }
    if (hasil == 2){
        printf("bil prima");
    }
    else {
        printf("bilangan bukan prima");
    }
}
