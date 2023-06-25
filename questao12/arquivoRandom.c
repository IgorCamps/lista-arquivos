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
    if (    (   (f = fopen("arquivo.dat", "wb")) == NULL )   ){
        printf("Erro ao criar o arquivo");
        return -1;
    }
    Turma Alunos[N], *ptr;
    ptr = Alunos;
    int i;
    
    for (i = 0; i < N; i++, ptr++)
    {
        printf("Nome do aluno %d: ", i+1);
        gets(ptr->nome);

        printf("Matricula do aluno %d: ", i+1);
        gets(ptr->matricula);

        printf("CR do aluno %d: ", i+1);
        scanf("%f", &ptr->CR);

        scanf("%*c");
        printf("\n");

    }
    
    fwrite(Alunos, sizeof(Turma), N, f);
    fclose(f);

}
