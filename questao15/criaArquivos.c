#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    FILE *f;
    if (    (   (f = fopen("temp.dat", "w")) == NULL )   ){
        printf("Erro ao criar o arquivo");
        return -1;
    }
    int i=0;
    char cadeia[] = "Ola mundo";
    

    while (cadeia[i]!= '\0')
    {
        fprintf(f, "%c ", cadeia[i]);
        i++;
    }

    cadeia[i+1] = '\0';

    printf("%d\n", i);

    printf("Arquivo salvo com sucesso!!!");

    fclose(f);

}
