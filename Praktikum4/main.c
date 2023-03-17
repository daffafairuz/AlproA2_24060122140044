#include <stdio.h>

#define N 3
int NilMax1(){
    // kamus lokal
    int array[N];
    int i ; // perulangan
    int besar = 0;
    int besar_kedua= 0;

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
