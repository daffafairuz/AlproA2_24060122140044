#include<stdio.h>
#include<stdlib.h>

int no2Ascend(void){
    int angka[]={8,9,6,7};

    printf("Sebelum\n");
    for(int i = 0;i<((sizeof(angka)/sizeof(int)));i++){
        printf("%d",angka[i]);
    }
    for(int i = 0;i<((sizeof(angka)/sizeof(int)));i++){
         for(int j = 0;j<((sizeof(angka)/sizeof(int)));j++){
            if(angka[j]<angka[j+1]){
                int temp = angka[j];
                angka[j]=angka[j+1];
                angka[j+1]=temp;
            }
    }
    }
    printf("\nSesudah\n");
    for(int i = 0;i<((sizeof(angka)/sizeof(int)));i++){
        printf("%d",angka[i]);
    }
    return 0;
}

