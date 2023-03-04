// nama file : luasKellLayang
// deskripsi : menghitung luas dan keliling sebuah layang layang
// nama : daffa fairuz annizari
// nim : 24060122140044
// tanggal : 21 februari 2023

#include <stdio.h>

int luasKellLayang(){
    // kamus lokal
    int s1; // sisi satu layang layang (m)
    int s2; // sisi dua layang layang (m)
    int d1; // diagonal satu layang layang (m)
    int d2; // diagonal dua layang layang (m)
    int Luas; // laus layang layang(m^2)
    int Kell; // keliling layang layang(m)

    // algoritma
    printf("masukkan s1: ");
    scanf("%d", &s1);
    printf("masukkan s2: ");
    scanf("%d", &s2);
    printf("masukkan d1: ");
    scanf("%d", &d1);
    printf("masukkan d2: ");
    scanf("%d", &d2);
    Luas = 0.5 * d1 * d2 ;
    Kell = 2 * (s1 +s2);
    printf("%d\n",Luas);
    printf("%d", Kell);
    return 0;

}
