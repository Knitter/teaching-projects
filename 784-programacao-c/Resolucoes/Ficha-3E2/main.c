/**
 * Ficha 3, exercício 2
 *
 * main.c
 *
 * Copyright (C) 2010 Sérgio Lopes
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//DEFINIÇÃO DAS ESTRUTURAS
struct pessoa
{
    char nome[200];
    char telefone[10];
    char telemovel[10];
    int dia, mes, ano;
};

struct ponto2d
{
    float x;
    float y;
};

struct aluno
{
    char nome[151];
    float nota1, nota2, nota3;
    float media;
};

struct livro
{
    char isbn[14];
    char autor[151];
    float preco;
    int paginas;
    char titulo[200];
};

//DECLARAÇÃO DAS FUNÇÕES
char lerCaracter(void);
int lerInteiro(void);
void lerString(char *texto);
struct pessoa inserirPessoa(void);
struct ponto2d inserirPonto(void);
float distancia2D(struct ponto2d p1, struct ponto2d p2);
float lerReal(void);
struct aluno inserirAluno(void);
struct livro inserirLivro(void);

int main()
{
    char opcao;
    struct pessoa pessoas[10];
    int pessoasExistentes, alunosExistentes, i;
    struct ponto2d ponto1, ponto2;
    struct aluno alunos[5];

    do
    {
        system("cls");
        printf("- Estruturas -\n");
        printf("1 - Inserir Pessoa\n");
        printf("2 - Inserir Coordenadas\n");
        printf("3 - Inserir 10 Pessoas\n");
        printf("4 - Distancia 2D\n");
        printf("5 - Inserir Alunos\n");
        printf("6 - Inserir Alunos Com Media\n");
        printf("7 - Inserir Livros\n");
        printf("8 - Sair\n");
        printf(":\n");

        opcao = lerCaracter();
        switch(opcao)
        {
        case '1':
            system("cls");
            printf("Inserir Pessoa\n\n\n");
            inserirPessoa();
            printf("\n\n");
            system("pause");
            break;
        case '2':
            system("cls");
            printf("Inserir Coordenadas\n\n\n");
            inserirPonto();
            printf("\n\n");
            system("pause");
            break;
        case '3':
            system("cls");
            printf("Inserir 10 Pessoas\n\n\n");
            for(pessoasExistentes = 0; pessoasExistentes < 10;)
            {
                pessoas[pessoasExistentes++] = inserirPessoa();
            }
            printf("\n\n");
            system("pause");
            break;
        case '4':
            system("cls");
            printf("Distancia 2D\n\n\n");
            printf("Primeiro Ponto\n");
            ponto1 = inserirPonto();
            printf("Segundo Ponto\n");
            ponto2 = inserirPonto();

            printf("Distancia calculada: %f\n\n", distancia2D(ponto1, ponto2));
            system("pause");
            break;
        case '5':
            system("cls");
            printf("Inserir Alunos\n\n\n");

            for(alunosExistentes = 0; alunosExistentes < 5;)
            {
                alunos[alunosExistentes++] = inserirAluno();
            }

            printf("\n\n");
            system("pause");
            break;
        case '6':
            system("cls");
            printf("Inserir Alunos Com Media\n\n\n");

            for(alunosExistentes = 0; alunosExistentes < 5;)
            {
                alunos[alunosExistentes++] = inserirAluno();
            }

            for(i = 0; i < alunosExistentes; i++)
            {
                alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
            }

            printf("\n\n");
            system("pause");
            break;
        case '7':
            system("cls");
            printf("Inserir Livros\n\n\n");

            inserirLivro();

            printf("\n\n");
            system("pause");
            break;
        }
    }
    while(opcao != '8');

    return 0;
}

//IMPLEMENTAÇÃO DAS FUNÇÕES
struct livro inserirLivro(void)
{
    struct livro novo;

    printf("Autor: ");
    lerString(novo.autor);
    printf("ISBN: ");
    lerString(novo.isbn);
    printf("Título: ");
    lerString(novo.titulo);
    printf("Preço: ");
    novo.preco = lerReal();
    printf("Páginas: ");
    novo.paginas = lerInteiro();

    return novo;
}

struct aluno inserirAluno(void)
{
    struct aluno novo;
    printf("Nome: ");
    lerString(novo.nome);
    printf("Nota 1: ");
    novo.nota1 = lerReal();
    printf("Nota 2: ");
    novo.nota2 = lerReal();
    printf("Nota 3: ");
    novo.nota3 = lerReal();

    return novo;
}

float lerReal(void)
{
    char lixo;
    float numero;

    scanf("%f", &numero);
    while( (lixo = getchar()) != '\n' && lixo != EOF );

    return numero;
}

float distancia2D(struct ponto2d p1, struct ponto2d p2)
{
    float y = (p2.y - p1.y), x = (p2.x - p1.x);
    return sqrt(y * y + x * x);
}

struct ponto2d inserirPonto(void)
{
    struct ponto2d novo;
    printf("X: ");
    novo.x = lerInteiro();
    printf("Y: ");
    novo.y = lerInteiro();

    return novo;
}

struct pessoa inserirPessoa(void)
{
    struct pessoa nova;
    printf("Nome: ");
    lerString(nova.nome);
    printf("Telefone: ");
    lerString(nova.telefone);
    printf("Telemovel: ");
    lerString(nova.telemovel);
    printf("Dia de Nascimento: ");
    nova.dia = lerInteiro();
    printf("Mes de Nascimento: ");
    nova.mes = lerInteiro();
    printf("Ano de Nascimento: ");
    nova.ano = lerInteiro();
    return nova;
}

void lerString(char *texto)
{
    char lixo;

    scanf("%[^\n]", texto);
    while( (lixo = getchar()) != '\n' && lixo != EOF );
}

int lerInteiro(void)
{
    char lixo;
    int numero;

    scanf("%d", &numero);
    while( (lixo = getchar()) != '\n' && lixo != EOF );

    return numero;
}

char lerCaracter(void)
{
    char lixo, caracter;

    scanf("%c", &caracter);
    while( (lixo = getchar()) != '\n' && lixo != EOF );

    return caracter;
}
