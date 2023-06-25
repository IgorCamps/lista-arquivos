#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    // Lendo o arquivo
    FILE *f;
    if (    (   (f = fopen("temp.dat", "r")) == NULL )   ){
        printf("Erro ao criar o arquivo");
        return -1;
    }

    char cadeia;
    
    // Na condição o fscanf irá ler o arquivo e quando terminar, ele retorna um valor igual a 1
    while ((fscanf(f, "%c", &cadeia)) == 1) {
        
        // imprime cada caracter
        printf("%c", cadeia);
        
        // Aguarda 1 segundo
        clock_t espera = 1 * CLOCKS_PER_SEC;
        clock_t inicio = clock();
        while (clock() < inicio + espera);

    }
    // Fechando o arquivo
    fclose(f);

}
