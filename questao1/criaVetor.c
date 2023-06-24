#include <stdio.h>
#include <stdlib.h>

int *aloca_vetor(int);
void preenche_vetor(int *, int, FILE *);
void libera_vetor(int *);

int main(){
    
    int TAM, *vet;

    FILE *f;
    
    if((f = fopen("vetor.txt", "w"))==NULL){
        printf("Não foi possivel criar o arquivo");
    }

    printf("Qual o tamanho do vetor?: ");
    scanf("%d", &TAM);

    fprintf(f , "%d \n", TAM);

    vet = aloca_vetor(TAM);
    if (vet == NULL)
    {
        printf("ERRO NA ALOCACAO");
        return -1;
    }
    preenche_vetor(vet, TAM, f);
    libera_vetor(vet);

    fclose(f);

}

int *aloca_vetor(int TAM){

    int *vet;

    if( ((vet = malloc(TAM * sizeof(int)))==NULL) ){
        printf("Alocacao invalida");
        return NULL;
    }   

    return vet;   
}

void preenche_vetor(int *vet, int TAM, FILE *f){
    int i;
    
    for ( i = 0; i < TAM; i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%d", &vet[i]);
        fprintf(f, "%d\n", vet[i]);
    }
    
}
void libera_vetor(int *vet){
    free(vet);
}