//nama file : tiga
// Deskrpsi : menentukan nama segitiga berdasarkan sisi sisinya
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 28 februari 2023

#include <stdio.h>

int tiga(){
    // kamus lokal
    int sisi1 ;
    int sisi2 ;
    int sisi3 ;

    // algoritma
    printf("masukkan sisi 1: ");
    scanf("%d", &sisi1);
    printf("masukkan sisi 2: ");
    scanf("%d", &sisi2);
    printf("masukkan sisi 3: ");
    scanf("%d", &sisi3);

    if (sisi1 > 0 && sisi2 > 0 && sisi3 >0 ){
        if (sisi1 == sisi2 && sisi1 == sisi3){
            printf("segitiga sama sisi");
        }
        else if (sisi1 != sisi2 && sisi2 != sisi3 && sisi1!= sisi3){
            printf("segitiga sembarang");
        }
        else{
            printf("segitiga sama kaki");
        }
    }else {
        printf("terdapat nilai yang bukan sisi segitiga");
    }

    return 0;

}
