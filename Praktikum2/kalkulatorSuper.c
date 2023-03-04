//nama file : kalkulatorSuper
// Deskrpsi : menentukan hasil dari operasi dua bilangan yang ditentukan operasinya oleh user
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 28 februari 2023

#include <stdio.h>

int kalkulatorSuper(){
    // kamus lokal
    int iA; // input bilangan
    int iB; // input bilangan
    char jenis; //jenis input

    // algoritma
    printf("jenis operasi");
    scanf("%c",&jenis);
    printf("masukkan iA: ");
    scanf("%d",&iA);
    printf("masukkan iB: ");
    scanf("%d",&iB);

    switch(jenis){
    case 'A' : printf("%d", iA + iB); break;
    case 'B' : printf("%d", iA - iB); break;
    case 'C' : printf("%d", iA * iB); break;
    case 'D' : printf("%d", (float)iA / iB); break;
    case 'E' : printf("%d", iA / iB); break;
    case 'F' : printf("%d", iA % iB); break;
    default: printf("bukan pilihan menu yang benar"); break;
    }
    return 0;
}
