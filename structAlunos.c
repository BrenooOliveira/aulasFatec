/*
PROPOSTA:
    - explore as structs baseado nos dados de ficha de aluno
DESCRICAO:
    - realizar uma analise estatistica com base nos inputs de dados
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

typedef struct ficha_aluno
{
    char nome[20];
    char registro[10];
    char disciplina[20];
    float nota_p1;
    float nota_p2;
    float media;
}ficha_aluno;

struct ficha_aluno aluno[0];

int main(void)
{
    int i;
    int qtd_alunos;

    printf(" -- ANALISE DE NOTAS DE ALUNOS -- ");

    printf("\nEm quantos alunos voce deseja fazer a analise? ");
    scanf("%d",&qtd_alunos);

    aluno[qtd_alunos];

    printf("\n-- CADASTRO DOS ALUNOS -- ");
    for(i=1; i <= qtd_alunos; i++)
    {
        fflush(stdin);
        printf("\n- dados do aluno %d - ",i);

        printf("\nNome do Aluno %d: ",i);
        fflush(stdin);
        gets(aluno[i].nome);

        printf("Registro do Aluno %d: ",i);
        fflush(stdin);
        gets(aluno[i].registro);

        printf("Disciplina: ");
        fflush(stdin);
        gets(aluno[i].disciplina);

        printf("Nota P1 do Aluno %d: ",i);
        fflush(stdin);
        scanf("%f",&aluno[i].nota_p1);

        printf("Nota P2 do Aluno %d: ",i);
        fflush(stdin);
        scanf("%f",&aluno[i].nota_p2);

        aluno[i].media  = (aluno[i].nota_p1+aluno[i].nota_p2)/2;

    }; // fim loop cadastro

    printf("\n-- VISUALIZACaAO DOS ALUNOS -- ");
    for(i=1; i <= qtd_alunos; i++)
    {
        printf("\nO aluno %d possui media %.2f na materia %s",i,aluno[i].media, aluno[i].disciplina);
    }

    getch();
}
