/**
 * Ficha 3, exercício 1.
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
#include <string.h>

void adicionarEspacos(char *s);
int palindromo(char *p);
int vogal(char letra);
void substituir(char *s);
void substituir2(char *s);
void cortar(char *s, int n);

/** INICIO DA FUNÇÃO MAIN **/
int main()
{
    char op, lixo, p[25];
    int n;
    do
    {
        system("cls");
        printf("< MENU >\n\n\n");
        printf(" 1 - Adicionar Espacos\n");
        printf(" 2 - Palindromo\n");
        printf(" 3 - Substituir Vogais\n");
        printf(" 4 - Remover Caracteres\n");
        printf(" 5 - Cortar Caracteres\n");
        printf(" 6 - Sair\n");
        printf("\n: ");

        scanf("%c", &op);
        while((lixo = getchar()) != '\n' && lixo != EOF);

        switch(op)
        {
        case '1':
            system("cls");
            printf("« Adicionar Espacos »\n\n\n");
            printf("Palavra: ");
            scanf("%s", p);
            while((lixo = getchar()) != '\n' && lixo != EOF);
            adicionarEspacos(p);
            printf("Com espacos: %s#\n\n", p);
            system("pause");
            break;
        case '2':
            system("cls");
            printf("« Palindromo »\n\n\n");
            printf("Palavra ou Numero: ");
            scanf("%s", p);
            while((lixo = getchar()) != '\n' && lixo != EOF);
            if(palindromo(p) == 1)
            {
                printf("É um palindromo\n\n");
            }
            else
            {
                printf("Nao é palindromo\n\n");
            }
            system("pause");
            break;
        case '3':
            system("cls");
            printf("« Substituir »\n\n\n");
            printf("Palavra: ");
            scanf("%s", p);
            while((lixo = getchar()) != '\n' && lixo != EOF);

            substituir(p);
            printf("Nova palavra %s\n\n", p);

            system("pause");
            break;
        case '4':
            system("cls");
            printf("« Substituir 2 »\n\n\n");
            printf("Palavra: ");
            scanf("%s", p);
            while((lixo = getchar()) != '\n' && lixo != EOF);

            substituir2(p);
            printf("Nova palavra %s\n\n", p);

            system("pause");
            break;
        case '5':
            system("cls");
            printf("« Cortar »\n\n\n");
            printf("Palavra: ");
            scanf("%s", p);
            while((lixo = getchar()) != '\n' && lixo != EOF);

            printf("Reduzir a: ");
            scanf("%d", &n);
            while((lixo = getchar()) != '\n' && lixo != EOF);

            cortar(p, n);
            printf("Nova palavra %s\n\n", p);

            system("pause");
            break;
        }
    }
    while(op != '6');

    return 0;
}
/** FIM DA FUNÇÃO MAIN **/

/** IMPLEMENTAÇÃO DE FUNÇÕES **/
void cortar(char *s, int n)
{
    s[n] = '\0';
}

void substituir2(char *s)
{
    int i, max = strlen(s) - 1;
    for(i = 1; i < max; i++)
    {
        s[i] = '.';
    }
}

void substituir(char *s)
{
    int i, max = strlen(s);

    for(i = 0; i < max; i++)
    {
        if(vogal(s[i]) == 1)
        {
            s[i] = '.';
        }
    }
}

int vogal(char letra)
{
    if(letra == 'a' || letra == 'A' ||
            letra == 'e' || letra == 'E' ||
            letra == 'i' || letra == 'I' ||
            letra == 'o' || letra == 'O' ||
            letra == 'u' || letra == 'U' )
    {
        return 1;
    }

    return 0;
}

int palindromo(char *p)
{
    int i, k;
    k = strlen(p) - 1;

    for(i = 0; i != k && k > i; i++, k--)
    {
        if(p[i] != p[k])
        {
            return 0;
        }
    }

    return 1;
}

void adicionarEspacos(char *s)
{
    int i, numCaracteres = 0;
    numCaracteres = strlen(s);

    if(numCaracteres < 25)
    {
        for(i = numCaracteres; i < 24; i++)
        {
            s[i] = ' ';
        }
        s[i] = '\0';
    }
}
