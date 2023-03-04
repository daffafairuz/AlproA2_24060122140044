//nama file : Hari
// Deskrpsi : menentukan nama hari berdasarkan urutannya dari input
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 28 februari 2023

#include <stdio.h>

int Hari(){
    // kamus lokal
    int i; // input urutan hari

    // algoritma
    printf("masukkan i: ");
    scanf("%d",&i);
    if (i== 1){
        printf("senin");
    }
    else if (i== 2){
        printf("selasa");
    }
    else if (i== 3){
        printf("rabu");
    }
    else if (i== 4){
        printf("kamis");
    }
    else if (i== 5){
        printf("jumat");
    }
    else if (i== 6){
        printf("sabtu");
    }
    else if (i== 7){
        printf("minggu");
    }
    else{
        printf("masukan nomor hari tidak tepat");
    }
    return 0;
}

