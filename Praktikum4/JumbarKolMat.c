//nama file : JumBarKolMat
// Deskrpsi : menentukan jumlah dari penjumalahan beris dan kolom dari tabel
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 13 maret 2023
#include <stdio.h>
#include <stdlib.h>

int JumbarKolMat(){
    // kamus lokal

    int tabel[3][3] = {{1,3,5},{2,5,2},{4,2,4}};
    int i,j;
    int sum;

    // algortima
    for (i=0 ; i<3 ; i++){
        sum = 0 ;
        for (j=0 ; j<3 ;j++){
           sum = sum + tabel[i][j];
        }
        printf("%d\n", sum);
    }
    for (i=0 ; i<3 ; i++){
        sum = 0 ;
        for (j=0 ; j<3 ;j++){
           sum = sum + tabel[j][i];
        }
        printf("%d\n", sum);
    }
    return 0;

}
