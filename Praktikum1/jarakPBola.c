// nama file : jarakPBola
// deskripsi : menghitung jarak parabola
// nama      : Daffa Fairuz Annizari
// nim       : 24060122140044
// tanggal   : 21 februari 2023

#include <stdio.h>

int jarakPBola(){
    // kamus lokal
    float y; // jarak(m)
    const int g =10; // gravitasi(m/s^2)
    int v0;// kecepatan awal(m/s)
    int t;// waktu(s)

    // algoritma
    printf("masukkan v0: ");
    scanf("%d",&v0);
    printf("masukan t: ");
    scanf("%d",&t);
    y = (v0*t)- (0.5*(g*t*t));
    printf("%.lf",y);
    return 0;

}

