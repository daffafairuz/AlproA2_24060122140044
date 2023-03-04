// nama file : gayaSentr
// deskripsi : menghitung gaya sentripetal
// nama      : Daffa Fairuz Annizari
// nim       : 24060122140044
// tanggal   : 21 februari 2023

#include <stdio.h>

int gayaSentr(){
    // kamus lokal
    int r; //jari jari (m)
    int m; // massa(kg)
    int v; // kecepatan(m/s)
    float f; // gaya(newton)

    // algoritma
    printf("masukkan jari - jari: ");
    scanf("%d",&r);
    printf("masukkan massa : ");
    scanf("%d",&m);
    printf("masukkan keceatan : ");
    scanf("%d",&v);
    f = m*((v*v)/r);
    printf("%f",f);
    return 0 ;

}

