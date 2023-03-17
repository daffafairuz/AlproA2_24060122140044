#include <stdio.h>

int Matriks(){
    // kamus lokal
    int Tabel[3][3];
    int N,i, j;

    // algoritma
    for(i= 0 ; i<3 ; i++){
        for (j=0 ; j<3 ; j++){
            Tabel[i][j] = 0;
            printf("%d", Tabel[i][j]);
        }
        printf("\n");
    }


}
