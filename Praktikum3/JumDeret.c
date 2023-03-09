//nama file : JumDeret
// Deskrpsi : menentukan hasil dari penjumlahan deret
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 6 maret 2023

#include <stdio.h>

int JumDeret(){
    // kamus lokal
    int N;// bilangan semabarang lebih dari nol
    int A;// counter
    int total = 0; // hasil

    // algoritma
    printf("masukkan nilai N: ");
    scanf("%d", &N);

    for (A = 0 ; A <= N ; A++ ){
        total = total + A ;
    }
    printf("%d", total);
    return 0;


}


