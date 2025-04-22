/**
 * Ficha 5 - Exercícios de Revisão
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
#include <string.h>

void lerConteudo(void);
void cifrar(void);
void maiusculas(void);
int eVogal(char c);
void removerVogais(void);

int main()
{
    char lixo, op;
    do
    {
        system("cls");
        printf("Ficha 5\n\n\n");
        printf("1: Ler Conteudo\n");
        printf("2: Cifra\n");
        printf("3: Maiusculas\n");
        printf("4: Remover Vogais\n");
        printf("5: Sair\n");
        printf("\n: ");
        scanf("%c", &op);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        switch(op)
        {
        case '1':
            lerConteudo();
            break;
        case '2':
            cifrar();
            break;
        case '3':
            maiusculas();
            break;
        case '4':
            removerVogais();
            break;
        }
    }
    while(op != '5');

    return 0;
}

void removerVogais(void)
{
    char linha[2500], ficheiro[250];
    int i, max;
    FILE *origem, *destino;

    system("cls");
    printf("Nome do Ficheiro: ");
    scanf("%s", ficheiro);

    destino = fopen("semvogais.txt", "w");
    if(destino != NULL)
    {
        origem = fopen(ficheiro, "r");
        if(origem != NULL)
        {
            while(!feof(origem))
            {
                fscanf(origem, "\n%[^\n]", linha);
                max = strlen(linha);
                for(i = 0; i < max; i++)
                {
                    if(eVogal(linha[i]) == 1)
                    {
                        linha[i] = ' ';
                    }
                }
                fprintf(destino, "%s\n", linha);
            }
            fclose(origem);
        }
        else
        {
            printf("Erro ao abrir o ficheiro.\n");
        }
        fclose(destino);
    }
    else
    {
        printf("Erro ao abrir o ficheiro.\n");
    }
    system("pause");
}

int eVogal(char c)
{
    switch(c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        return 1;
    }

    return 0;
}

void maiusculas(void)
{
    char ficheiro[250], linha[2500];

    FILE *origem, *destino;
    int i, max;

    system("cls");
    printf("Nome do Ficheiro: ");
    scanf("%s", ficheiro);

    destino = fopen("maiusculas.txt", "w");
    if(destino != NULL)
    {
        origem = fopen(ficheiro, "r");
        if(origem != NULL)
        {
            while(!feof(origem))
            {
                fscanf(origem, "\n%[^\n]", linha);
                max = strlen(linha);
                for(i = 0; i < max; i++)
                {
                    if(linha[i] >= 'a' && linha[i] <= 'z')
                    {
                        linha[i] = linha[i] - 32;
                    }
                }
                fprintf(destino, "%s\n", linha);
            }
            fclose(origem);
        }
        else
        {
            printf("Erro ao abrir o ficheiro.\n");
        }
        fclose(destino);
    }
    else
    {
        printf("Erro ao abrir o ficheiro.\n");
    }
}

void cifrar(void)
{
    char frase[2500];
    FILE *fi;
    int i, max;

    fi = fopen("cifra.txt", "w");
    if(fi != NULL)
    {
        system("cls");
        printf("Frase: ");
        scanf("%[^\n]", frase);

        max = strlen(frase);
        for(i = 0; i < max; i++)
        {
            if(frase[i] == 'a' || frase[i] == 'A')
            {
                frase[i] = '1';
            }
            else if(frase[i] == 'e' || frase[i] == 'E')
            {
                frase[i] = '2';
            }
            else if(frase[i] == 'i' || frase[i] == 'I')
            {
                frase[i] = '3';
            }
            else if(frase[i] == 'o' || frase[i] == 'O')
            {
                frase[i] = '4';
            }
            else if(frase[i] == 'u' || frase[i] == 'U')
            {
                frase[i] = '5';
            }
        }
        for(i = max - 1; i >= 0; i--)
        {
            fprintf(fi, "%c", frase[i]);
        }
        fclose(fi);
        printf("Frase cifrada com sucesso.\n");
    }
    else
    {
        printf("Erro ao abrir o ficheiro.\n");
    }
    system("pause");
}

void lerConteudo(void)
{
    char nome[200], linha[1500];
    FILE *fi;

    system("cls");
    printf("Nome do Ficheiro: ");
    scanf("%s", nome);

    fi = fopen(nome, "r");
    if(fi != NULL)
    {
        while(!feof(fi))
        {
            fscanf(fi, "\n%[^\n]", linha);
            printf("%s\n", linha);
        }
    }
    else
    {
        printf("Erro ao abrir o ficheiro.\n");
        system("pause");
    }
}
