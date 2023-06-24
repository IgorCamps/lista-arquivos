#include <stdlib.h>
#include <stdio.h>

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

    Loja items, *ptr;

    ptr = &items;
    
    int continuar;

    do
    {
        printf("Deseja cadastrar um produto?: 1 - Sim. 0 - Nao ");
        scanf("%d", &continuar);




    } while (continuar!=0);
    

}