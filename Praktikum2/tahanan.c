//nama file : tahanan
// Deskrpsi : menentukan hasil penjumlahan dari tiga buah tahanan yang bernilai positif atau nol
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 28 februari 2023

#include <stdio.h>

int tahanan(){
    // kamus lokal
    int T1; // tahanan satu
    int T2; // tahanna dua
    int T3; // tahanan tiga
    int hasil; // hasil dari penjumlahan

    // algoritma
    printf("masukkan tahanan 1: ");
    scanf("%d", &T1);
    printf("masukkan tahanan 2: ");
    scanf("%d", &T2);
    printf("masukkan tahanan 3: ");
    scanf("%d", &T3);
    if (T1 >= 0 && T2 >= 0 && T3 >= 0){
        hasil = T1 + T2 + T3;
        printf("%d", hasil);
    }
    else{
        printf("masukan tahanan tidak boleh negatif");
    }
    return 0;

}
