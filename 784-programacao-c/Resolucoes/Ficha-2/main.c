/**
 * Ficha 2, vectores
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

/** ZONA DE DECLARAÇÃO **/
int lerOpcao(void);
float lerNumeroReal(void);
int lerNumeroInteiro(void);
char lerCaracter(void);
float soma(void);
void inversor(void);
float mediaNotas(void);
float registarNotas();
float produtoEscalar(void);
int pesquisarInteiro(void);
void copiaInversa(void);
int pesquisaPosicao(int valores[5], int valor);

/** FUNÇÃO MAIN **/
int main()
{
    int op, valores[5], valor, pos, i;

    do
    {
        system("cls");

        printf("< MENU >\n\n");
        printf(" 1 - Soma de Números\n");
        printf(" 2 - Impressão Inversa\n");
        printf(" 3 - Média\n");
        printf(" 4 - Notas de Teste\n");
        printf(" 5 - Produto Escalar\n");
        printf(" 6 - Pesquisa de Número\n");
        printf(" 7 - Cópia Inversa\n");
        printf(" 8 - Ordenar Inteiros\n");
        printf(" 9 - Ordenar Caracteres\n");
        printf("10 - Pesquisa de Posição\n");
        printf("11 - Sair\n");
        printf("\n: ");

        op = lerOpcao();

        switch(op)
        {
        case 1:
            system("cls");
            printf("+ Soma de Números +\n\n\n");
            printf("Insira os números, máximo 50, insira 0 para terminar.\n");
            printf("\nSoma: %.2f\n\n", soma());
            system("pause");
            break;
        case 2:
            system("cls");
            printf("+ Inverso +\n\n\n");

            inversor();
            printf("\n");

            system("pause");
            break;
        case 3:
            system("cls");
            printf("+ Media +\n\n\n");
            printf("Resultado: %.2f\n\n",
                   mediaNotas());
            system("pause");
            break;
        case 4:
            system("cls");
            printf("+ Registo Notas +\n\n\n");

            registoNotas();

            system("pause");
            break;
        case 5:
            system("cls");
            printf("+ Produto Escalar +\n\n\n");

            printf("Produto: %.2f", produtoEscalar());

            system("pause");
            break;
        case 6:
            system("cls");
            printf("+ Pesquisa de Inteiro +\n\n\n");

            printf("Nr Ocorrencias: %d\n",
                   pesquisarInteiro());

            system("pause");
            break;
        case 7:
            system("cls");
            printf("+ Cópia Inversa +\n\n\n");

            copiaInversa();

            printf("\n\n");
            system("pause");
            break;
        case 10:
            system("cls");
            printf("+ Cópia Inversa +\n\n\n");

            for(i = 0; i < 5; i++)
            {
                printf("N: ");
                valores[i] = lerNumeroInteiro();
            }

            printf("\nValor a pesquisar: ");
            valor = lerNumeroInteiro();

            pos = pesquisaPosicao(valores, valor);
            if(pos == -1)
            {
                printf("Valor não existe na pesquisa.");
            }
            else
            {
                printf("Valor encontrado na posição %dª", pos + 1);
            }

            printf("\n\n");
            system("pause");
            break;
        }//FIM DO SWITCH
    }//FIM DO DO
    while(op != 11);

    return 0;
}
/** FIM DA FUNÇÃO MAIN **/

/** ZONA DE IMPLEMENTAÇÃO **/
int pesquisaPosicao(int valores[5], int valor)
{
    int i;
    for(i = 0; i < 5; i++)
    {
        if(valores[i] == valor)
        {
            return i;
        }
    }

    return -1;
}
void copiaInversa(void)
{
    int v1[5], v2[5], i, k;

    for(i = 0; i < 5; i++)
    {
        printf("Número: ");
        v1[i] = lerNumeroInteiro();
    }

    for(i = 0, k = 4; i < 5; i++, k--)
    {
        v2[i] = v1[k];
    }

    printf("Vector 1: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", v1[i]);
    }

    printf("\nVector 2: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", v2[i]);
    }
}
int pesquisarInteiro(void)
{
    int valores[18] = {2, 23, 43, 12, 43, 43, 54,
                       2342, 54, 5, 34, 534, 653,
                       45, 76, 1, 4, 9
                      };
    int i, numero, ocorrencias = 0;

    printf("Indique o valor a pesquisar: ");
    numero = lerNumeroInteiro();
    for(i = 0; i < 18; i++)
    {
        if(valores[i] == numero)
        {
            ocorrencias++;
        }
    }
    return ocorrencias;
}

float produtoEscalar(void)
{
    float v1[5], v2[5], soma = 0.0;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("V1 %dª: ", i + 1);
        scanf("%f", &v1[i]);
    }

    for(i = 0; i < 5; i++)
    {
        printf("V2 %dª: ", i + 1);
        scanf("%f", &v2[i]);
    }

    for(i = 0; i < 5; i++)
    {
        soma += v1[i] * v2[i];
    }

    return soma;
}

void registoNotas(void)
{
    char notas[10], temp;
    int i;

    i = 0;
    do
    {
        printf("Nota: ");
        temp = lerCaracter();
        if(temp >= 'A' && temp <= 'E')
        {
            notas[i] = temp;
            i++;
        }
    }
    while(i < 10);

    for(i = 0; i < 10; i++)
    {
        printf("Nota do Exercicio %d: %c\n",
               i + 1, notas[i]);
    }
}

float mediaNotas(void)
{
    int i, lidos = 0;
    float s = 0.0, numeros[50];
    for(i = 0; i < 50; i++)
    {
        numeros[i] = lerNumeroReal();
        if(numeros[i] == -1)
        {
            break;
        }
        lidos++;
    }
    for(i = 0; i < lidos; i++)
    {
        s += numeros[i];
    }
    return s / lidos;
}

void inversor(void)
{
    int i;
    float numeros[10];

    for(i = 0; i < 10; i++)
    {
        numeros[i] = lerNumeroReal();
    }

    for(i = 9; i >= 0; i--)
    {
        printf("%.2f  ", numeros[i]);
    }
}

float soma(void)
{
    int i, lidos = 0;
    float s = 0.0, numeros[50];
    for(i = 0; i < 50; i++)
    {
        numeros[i] = lerNumeroReal();
        if(numeros[i] == 0)
        {
            break;
        }
        lidos++;
    }
    for(i = 0; i < lidos; i++)
    {
        s += numeros[i];
    }
    return s;
}

char lerCaracter(void)
{
    char lixo, x;

    scanf("%c", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}

int lerNumeroInteiro(void)
{
    int x;
    char lixo;

    scanf("%d", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}

float lerNumeroReal(void)
{
    float x;
    char lixo;

    scanf("%f", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}

int lerOpcao(void)
{
    int x;
    char lixo;

    scanf("%d", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}
