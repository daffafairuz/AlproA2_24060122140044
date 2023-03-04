// nama file : jarakGLBB
// deskripsi : menghitung jarak GLBB
// nama      : Daffa Fairuz Annizari
// nim       : 24060122140044
// tanggal   : 21 februari 2023

#include <stdio.h>
#include <stdlib.h>

int jarakGLBB(){
    // kamus lokal
    int a; // percepatan(m/s^2)
    int v0; // kevepatan awal(m/s)
    int t; // waktu(s)
    float s; // jarak(m)

    // algoritma
    printf("masukan a: ");
    scanf("%d",&a);
    printf("masukan v0: ");
    scanf("%d",&v0);
    printf("masukan t: ");
    scanf("%d",&t);
    s = (v0*t) + (0.5*a*t*t);
    printf("%f",s);
    return 0;

}
