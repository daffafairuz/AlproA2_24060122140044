
#include <stdio.h>
// nama : Daffa Fairuz Annizari
// NIM : 24060122140044
// Deskripsi: membuat sebuah selection sorting descending

int main(){
    // kamus lokal
    int t[9]= {1,2,6,9,3,4,5,9,6};
    int i;
    int j;
    int N = 9;
    int temp;

    // algoritma
    printf("sebelum sorting\n");
    for (i=0; i <N; i++){
        printf("%d", t[i]);
    }
    printf("\n");
    printf("setelah selection sorting\n");
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            if (t[i]>t[j]){
                temp = t[j];
                t[j]= t[i];
                t[i]= temp;
            }

        }
    }
    for(i=0; i<9; i++){
        printf("%d", t[i]);
    }

}
