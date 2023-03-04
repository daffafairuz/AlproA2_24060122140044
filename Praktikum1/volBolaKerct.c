// nama file : volBolaKerct
// deskripsi : menghitung volume bola dan volume kerucut jika diketahui jari jari
// nama      : Daffa Fairuz Annizari
// nim       : 24060122140044
// tanggal   : 21 februari 2023

#include <stdio.h>

int volBolaKerct(){
    // kamus lokal
    int r; //jari jari (m)
    const float PHI = 3.1415;
    float Vb; // voluma bola(m^3)
    float Vk; // voluma kerucut(m^3)

    // algoritma
    printf("masukkan jari - jari: ");
    scanf("%d",&r);
    Vb = (4*PHI * r *r)/3 ;
    Vk = 0.5 * Vb ;
    printf("%f\n", Vb);
    printf("%f", Vk);
    return 0 ;

}
