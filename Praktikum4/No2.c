#include <stdio.h>

int No2(){
    //kamus lokal
    int *tabel; // tabel pertama
    int N ; // banyak tabel
    int i ; // counter
    int sum; // penghitung jumlah bilangan
    int j; // counter 2
    int *dinal; // tabel kedua

    // algoritma
    printf("masukkan panjang tabel: ");
    scanf("%d", &N);

    tabel = (int*)malloc(N*sizeof(int));

    for (i=0 ; i<N ; i++){
        printf("masukkan nilai ke-%d: " ,i+1);
        scanf("%d",tabel+i);
    }
    for(i=0 ; i<N ; i++){
        sum = 1;
        j = 1;
        while(j<N){
            if (tabel[i] = tabel[j]){
                sum = sum + 1 ;
            }
            j++ ;
        }
        if (sum > 1){
            printf("%d", tabel[i]);
        }
    }
    printf("%d", tabel[1]);
}
