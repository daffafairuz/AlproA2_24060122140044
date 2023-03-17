//nama file : JumFrekNilTabel
// Deskrpsi : menentukkan hasil penjumlahan dari elemen tabel yang muncul lebih dari satu kali
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 13 maret 2023
#include <stdio.h>
#include <stdlib.h>

int JumFrekNilTabel(){
    // kamus lokal
    int tabel[10]={7,4,5,7,6,5,3,5,1,4};
    int N,i,j ;// banyak element tabel
    int sum =0 ;

    // algoritma
    for (i=0 ; i<10 ; i++)
    {
        N = 1;
        if (tabel[i]!= 0)
        {
        for (j=i+1; j<10 ; j++)
        {
            if (tabel[i]== tabel[j])
            {
                N = N + 1;
                tabel[j]= 0;
            }
        }
        if (N > 1)
        {
            sum = sum + (N*tabel[i]);
        }
        }
    }
    printf("%d", sum);
}
