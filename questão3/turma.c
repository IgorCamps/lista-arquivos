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

    if ( (f = fopen("turmas.txt", "w")) == NULL)
    {
        printf("Erro ao criar o arquivo");
        return -1;
    }
    
    Turma Alunos[3], *ptr;

    ptr = Alunos;

    int i;
    
    for ( i = 0; i < 3; i++)
    {
        printf("Nome do aluno %d: ", i+1);
        gets(ptr->nome);

        fprintf(f, "%s\n", ptr->nome);
        
        printf("Sexo do aluno %d: ", i+1);
        gets(ptr->sexo);
        
        fprintf(f, "%s\n", ptr->sexo);

        printf("Matricula do aluno %d: ", i+1);
        gets(ptr->matricula);
        
        fprintf(f, "%s\n", ptr->matricula);

        printf("Idade do aluno %d: ", i+1);
        gets(ptr->idade);
        
        fprintf(f, "%s\n", ptr->idade);

        printf("E-mail do aluno %d: ", i+1);
        gets(ptr->email);

        fprintf(f, "%s\n", ptr->email);

        printf("\n");
        ptr++;
        
    }

    fclose(f);

    return 0;   
}