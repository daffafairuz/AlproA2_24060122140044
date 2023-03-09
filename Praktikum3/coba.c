#include <stdio.h>

int Coba(){
    // kamus lokal
    int N ; // bilangan sembarang postif
    int i ; // counter
    int hasil; // hasil penentu
    int j ; // counter 2

    // algortima
    printf(" masukkan N ; ");
    scanf("%d", &N);

    for (i = 1 ; i <= N ; i++){
        hasil=0;
        for(j=1;j<=i;j++) {
            if(i%j==0) {
                hasil=hasil+1;
            }
        }if(hasil==2) {
            printf("%d",i);
        }
    }
}
