// nama file: CekBilSemp
// Deskrpsi : menentukan hasil dari penjumlahan deret
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 6 maret 2023

#include <stdio.h>

int CekBilSemp(){
    // kamus lokal
    int N ; // input bilangan
    int i ; // counter
    int hasil=0 ; // hasil

    // algoritma
    printf("masukkan N : ");
    scanf("%d", &N);

    for(i = 1 ; i <= N ; i++ ){
        if (N % i == 0 && i != N){
            hasil = hasil + i ;
        }
    }
    if (hasil == N){
        printf("bilangan sempurna");
    }
    else {
        printf("bilangan tidak sempurna");
    }
    return 0;
}


