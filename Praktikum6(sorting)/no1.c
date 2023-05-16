// nama : Daffa Fairuz Annizari
// NIM : 24060122140044
// Deskripsi: mencari nilai N dari sebuah array, XI bernilai 0 jika tidak ketemu dan XI bernilai 1 jika ketemu
#include <stdio.h>

int main(){
    // kamus lokal
    int T[5]={1,5,10,3,9};
    int i;
    int X = 7 ;
    int IX;
    int N = 5;

    // algoritma

    i = 1;
    while (i<N && T[i]!=X){
        i++;
    }
    if (T[i]== X){
        IX = 1;
    }
    else{
        IX = 0;
    }
    printf("%d", IX);
    return 0;

}
