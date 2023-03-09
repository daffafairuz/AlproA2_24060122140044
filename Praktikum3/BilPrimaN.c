// nama program : BilPrimaN
// deskripsi ; mengembalikan nilai yang berupa bilangan Prima dari satusampai N
// nama : Daffa Fairuz Annizari
// nim : 24060122140044
// tanggal : 8 maret 2023

# include <stdio.h>


int BilPrimaN(){
    // kamus lokal
    int N ; // bilangan sembarang postif
    int i ; // counter
    int hasil; // hasil penentu
    int j ; // counter 2

    // algortima
    printf(" masukkan N : ");
    scanf("%d", &N);
    i = 1 ;
    while(i<=N){
        hasil=0;
        for(j=1;j<=i;j++) {
            if(i%j==0) {
                hasil=hasil+1;
            }
        }if(hasil==2) {
            printf("%d",i);
        }
    i ++ ;
    }
}

