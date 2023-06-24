#include <stdlib.h>
#include <stdio.h>

typedef struct 
{
    char nome[255];
    char sexo[2];
    char matricula[10];
    char idade[4];
    char email[50];
}Turma;


int main(){
    FILE *f;

    if ( (f = fopen("turmas.txt", "r")) == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return -1;
    }

    Turma Alunos[3], *ptr;

    ptr = Alunos;

    int i;
    
    for ( i = 0; i < 3; i++)
    {   
        fscanf(f, "%s", ptr->nome);
        printf("%s\t", ptr->nome);
         
        fscanf(f, "%s", ptr->matricula);
        printf("%s\t", ptr->matricula);
        
        fscanf(f, "%s", ptr->sexo);
        printf("%s\t", ptr->sexo);
        
        fscanf(f, "%s", ptr->idade);
        printf("%s\t", ptr->idade);
         
        fscanf(f, "%s", ptr->email);
        printf("%s\t", ptr->email);
         
        printf("\n");
        ptr++;
    }

    fclose(f);
}