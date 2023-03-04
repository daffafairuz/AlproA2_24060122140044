
//nama file : Bulan
// Deskrpsi : menentukan nama bulan berdasarkan urutannya dari input
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 28 februari 2023

#include <stdio.h>

int Bulan(){
    // kamus lokal
    int i; // input urutan  bulan

    // algoritma
    printf("masukkan i: ");
    scanf("%d",&i);
    switch(i){
    case 1 : printf("januari"); break;
    case 2 : printf("februaru"); break;
    case 3 : printf("maret"); break;
    case 4 : printf("april"); break;
    case 5 : printf("mei"); break;
    case 6 : printf("juni"); break;
    case 7 : printf("july"); break;
    case 8 : printf("agustus"); break;
    case 9 : printf("september"); break;
    case 10: printf("oktober"); break;
    case 11: printf("november"); break;
    case 12: printf("desember"); break;
    default: printf("masukan nomor bulan tidak tepat"); break;
    }
    return 0;
}
