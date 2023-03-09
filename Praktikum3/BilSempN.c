// nama program : BilSempN
// deskripsi ; mengembalikan nilai yang berupa bilangan sempurna dari satu sampai N
// nama : Daffa Fairuz Annizari
// nim : 24060122140044
// tanggal : 8 maret
# include <stdio.h>


int BilSempN(){
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
        for(j=1;j<i;j++) {
            if(i%j==0) {
                hasil=hasil+j;
            }
        }if(hasil==i) {
            printf("%d",i);
        }
    i ++ ;
    }
}


