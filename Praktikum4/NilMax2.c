//nama file : NilMax2
// Deskrpsi : membuat mencari nilai maksimal kedua dari sebuah array
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 13 maret 2023

# include <stdio.h>

int NilMax2(){
    // kamus lokal
    int array[10];
    int i ; // perulangan
    int besar = 0;
    int besar_kedua= 0;
    int N = 10;

    // algoritma
    for (i = 0; i < N; i++ ){
        scanf("%d", &array[i]);
        if (besar < array[i]){
            besar_kedua = besar;
            besar = array[i];

        }
    }

    printf("%d", besar_kedua);
}

