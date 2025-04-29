/**
 * Ficha 4, ponteiros.
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

struct pessoa
{
 char nome[151];
 int idade;
 char telefone[10];
};

void alterar(int *ref);
void trocar(int *a, int *b);
void inserirPessoa(struct pessoa *p);

int main()
{
    char lixo, op;
    struct pessoa pessoa;
    int x, y, v;

    do
    {
        system("cls");
        printf("- PONTEIROS -\n\n\n");
        printf("1 - Alterar Valor por Referência\n");
        printf("2 - Trocar Valores\n");
        printf("3 - Inserir Pessoa por Referência\n");
        printf("4 - Sair\n");
        printf("\n: ");

        scanf("%c", &op);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        switch(op)
        {
            case '1':
            system("cls");
            alterar(&x);
            printf("Valor: %d\n\n", x);
            system("pause");
            break;
            case '2':
            system("cls");
            printf("Indique o valor 1: ");
            scanf("%d", &x);
            while((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Indique o valor 1: ");
            scanf("%d", &y);
            while((lixo = getchar()) != '\n' && lixo != EOF);

            trocar(&x, &y);

            printf("Valor 1: %d\tValor 2: %d\n\n", x, y);
            system("pause");

            break;
            case '3':
            system("cls");
            printf("- Nova Pessoa -");

            inserirPessoa(&pessoa);

            printf("\nDados\n\n%s\n%s\n%d\n\n", pessoa.nome, pessoa.telefone, pessoa.idade);
            system("pause");
            break;
        }
    }
    while(op != '4');

    return 0;
}

void inserirPessoa(struct pessoa *p)
{
    char lixo;

    printf("Nome: ");
    scanf("%[^\n]", p->nome);
    while((lixo = getchar()) != '\n' && lixo != EOF);
    printf("Telefone: ");
    scanf("%s", p->telefone);
    while((lixo = getchar()) != '\n' && lixo != EOF);
    printf("Idade: ");
    scanf("%d", p->idade);
    while((lixo = getchar()) != '\n' && lixo != EOF);
}

void trocar(int *a, int *b)
{
    int c;
    c = (*a);
    (*a) = (*b);
    (*b) = c;
}

void alterar(int *ref)
{
    char lixo;

    printf("Indique um valor: ");
    scanf("%d", ref);
    while((lixo = getchar()) != '\n' && lixo != EOF);
}

