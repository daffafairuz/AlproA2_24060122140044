//nama file : FrekNilTabel
// Deskrpsi : menentukan elemen tabel  yangmuncul dua kali
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 13 maret 2023
#include <stdio.h>
#include <stdlib.h>

int FrekNilTabel(){
    // kamus lokal
    int N, i, j;
    int *tabel;
    int sum = 0 ;

    // algoritma
    printf("masukkan panjang tabel: ");
    scanf("%d", &N);
    tabel = (int*)malloc(N*sizeof(int));
    for (i=0 ; i<N ; i++){
        printf("masukkan nilai ke-%d :", i+1);
        scanf("%d",tabel+i);
    }
    for (i = 0;i<N;i++){
        for (j = 1;j<i;j++){
            if (tabel[i]==tabel[j]){
                printf("%d", tabel[j]);
            }
        }
    }
    free(tabel);

    return 0 ;
}
