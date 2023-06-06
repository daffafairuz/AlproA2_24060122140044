#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nama[255][255];
    int power;
}
pokemon;

int main(){
    // kamus lokal
    pokemon alfon;
    int retval;

    FILE *myFile, *SClass, *AClass ;
    myFile = fopen("RekapNilai.txt", "r");
    SClass = fopen("Pok;emonSClass.txt", "w");
    AClass = fopen("PokemonAClass.txt", "w");

    // algoritma
    if(!myFile){
        printf("file tidak ditemkan");
    }
    else{
        fprintf(SClass, "daftar pokemon tierS\n");
        fprintf(AClass, "daftar pokemon tierA\n");

        retval =fscanf(myFile,"%s %d", &alfon.nama, &alfon.power);
        while (retval != EOF){
            if (alfon.power > 900){
                fprintf(SClass, "%s %d\n", alfon.nama, alfon.power);
            }else {
                fprintf(AClass, "%s %d\n", alfon.nama, alfon.power);
            }
            retval =fscanf(myFile,"%s %d\n", &alfon.nama, &alfon.power);
        }
        printf("Nilai berhasil dikelompokkan");
        fclose(myFile);
    }
    return 0;
}
