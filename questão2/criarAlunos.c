#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
char nome[255];
char telefone[13];
}TAluno;

int main(){
    FILE *alunos;
    TAluno Alunos, *ptr;

    int comp=0;

    ptr = &Alunos;

    if ( (alunos = fopen("alunos.txt", "a") ) == NULL)
    {
        printf("Erro ao criar o arquivo!!");
        return -1;
    }
    
   do {
        printf("Nome do aluno: ");
        gets(ptr->nome); 
        if( (comp=strlen(ptr->nome) ) == 0) break;; 

        fprintf(alunos, "%s\n", ptr->nome);

        printf("Telefone: ");
        gets(ptr->telefone);
        fprintf(alunos, "%s\n", ptr->telefone);
    } while (comp);
    
    
    
    fclose(alunos);
    
}