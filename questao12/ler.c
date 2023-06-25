#include <stdlib.h>
#include <stdio.h>
#define N 2
typedef struct 
{
    char nome[100];
    char matricula[11];
    float CR;
}Turma;

int main(){
    FILE *f;
    if (    (   (f = fopen("arquivo.dat", "rb")) == NULL )   ){
        printf("Erro ao criar o arquivo");
        return -1;
    }

    
    Turma Alunos[N], *ptr;
    ptr = Alunos;
    int i;

    fread(Alunos, sizeof(Turma), N, f);
    
    for (i = 0; i < N; i++, ptr++)
    {
        printf("Nome do aluno %d: %s\n", i+1, ptr->nome);
        printf("Matricula do aluno %d: %s\n", i+1, ptr->matricula);
        printf("CR do aluno %d: %.2f\n", i+1, ptr->CR);
        printf("\n");
    }
    
    
    fclose(f);

}
