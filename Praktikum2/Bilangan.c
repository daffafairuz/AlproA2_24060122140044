//nama file : Bilangan
// Deskrpsi : menentukan suati inputan apakah ia bilangan bulat postif, negatif , nol atau tidak keduanya
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 28 februari 2023

#include <stdio.h>

int Bilangan(){
    // kamus lokal
    int i; // bilangan semabarang

    // algoritma
    printf("masukkan i: ");
    if (scanf("%d",&i)){
        if (i > 0) {
            printf("bilangan positif");
        }else if (i == 0){
            printf("bilangan nol");
        }else if (i<0){
            printf("bilangan negatif");
        }
    }else{
        printf("bukan sebuah bilangan");
    }
    return 0;

}

