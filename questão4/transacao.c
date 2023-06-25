#include <stdlib.h>
#include <stdio.h>
#include <time.h>
typedef struct 
{
    char cdNum[5];
    char descricao[255];
    int qtd;
    float valor;
}Loja;


int main(){
    FILE *f;
    if ( (f = fopen("transacao", "a")) == NULL){
        printf("Erro ao criar o arquivo");
        return -1;
    }

    time_t mytime;
    mytime = time(NULL);

    Loja items, *ptr;

    ptr = &items;
    
    int continuar, qtdMax=0;


    printf("Deseja cadastrar um produto?: 1 - Sim. 0 - Nao ");
    scanf("%d", &continuar);
    scanf("%*c");
    if(continuar==0) return -1;
    
    do
    {
        
        qtdMax++;
        
        printf("Codigo numero: ");
        gets(ptr->cdNum);
        fprintf(f, "%s ", ptr->cdNum);

        printf("Descricao: ");
        gets(ptr->descricao);
        fprintf(f, "%s ", ptr->descricao);

        printf("Quantidade: ");
        scanf("%d", &ptr->qtd);
        fprintf(f, "%d ", ptr->qtd);

        printf("Valor: ");
        scanf("%f", &ptr->valor);
        fprintf(f, "%f ", ptr->valor);

        fprintf(f,ctime(&mytime));
        printf("\n");

        printf("Deseja cadastrar outro produto?: 1 - Sim. 0 - Nao ");
        scanf("%d", &continuar);
        scanf("%*c");

    } while (continuar!=0); 

    fclose(f);
}