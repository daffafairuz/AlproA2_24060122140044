//nama file : SimetriTabel
// Deskrpsi : menentukan apakah dua tabel simetri atau tidak
// nama     : Daffa Faruz Annizari
// NIM      : 24060122140044
// tanggal  : 13 maret 2023
#include <stdio.h>
#include <stdlib.h>

int SimetriTabel(){
    // kamus lokal
    int *T1 ;
    int *T2 ;
    int N1 ;
    int N2 ;
    int i ;

    // algoritma
    printf("masukkan besar T1: ");
    scanf("%d", &N1);
    printf("masukkan besar T2: ");
    scanf("%d", &N2);
    T1 = (int*)malloc(N1*sizeof(int));
    T2 = (int*)malloc(N2*sizeof(int));
    if (N1 == N2){
        for (i=0; i<N1 ; i++){
            printf("masukkan nilai Tabel T1 ke-%d : ", i+1);
            scanf("%d", T1 + i);
        }
        for (i = 0; i<N2 ; i++){
            printf("masukkan nilai tabel T2 ke-%d : ", i+1);
            scanf("%d", T2 + i);
        }
        for (i=0 ; i<N1 ; i++){
           if (T1[N1-1] == T2[N2-1]){
                printf("Simetri");
                break ;
           }
           else {
                printf("tidak simetri");
                break;
           }
        }
    }
    else {
        printf("TIDAK SIMETRI");
    }
}
