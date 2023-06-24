#include <stdio.h>
#include <stdlib.h>

void maior(FILE *, int *, int);
void menor(FILE *, int *, int);
void midia(FILE *, int *, int);
int main(){
    FILE *f;
    int TAM;
    if(( f = fopen("vetor.txt", "r") )== NULL){
        printf("Nao foi possivel ler o arquivo!");
        return -1;
    }
    fscanf(f, "%d", &TAM);    
    int vet[TAM];
    printf("Tamanho do vetor %d\n\n", TAM);
    printf("Midia dos elementos:\n");
    midia(f, vet, TAM);
    maior(f, vet, TAM);
    menor(f, vet, TAM);

    fclose(f);
}

void maior(FILE *f, int *vet, int TAM){

    int i, maiorElemento;

    for (i = 0; i < TAM; i++)
    {
        fscanf(f, "%d", &vet[i]);
    }
    
    maiorElemento = vet[0];
    for ( i = 0; i < TAM; i++)
    {
        if ( vet[i] > maiorElemento)
        {
            maiorElemento = vet[i];
        }
    }
    
    printf("\nO maior elemento eh: %d\n", maiorElemento);
}

void menor(FILE *f, int *vet, int TAM){

    int i, menorElemento;

    for (i = 0; i < TAM; i++)
    {
        fscanf(f, "%d", &vet[i]);
    }
    
    menorElemento = vet[0];

    for ( i = 0; i < TAM; i++)
    {
        if ( vet[i] < menorElemento)
        {
            menorElemento = vet[i];
        }
    }
    
    printf("\nO menor elemento eh: %d\n", menorElemento);
}

void midia(FILE *f, int *vet, int TAM){

    int i;
    for ( i = 0; i < TAM; i++)
    {
        fscanf(f, "%d", &vet[i]);
        printf("Valor %d: %d\n", i+1, vet[i]);
    }
}
