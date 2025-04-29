/**
 * Ficha 1, funções.
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

/** ZONA DE DECLARAÇÃO DE FUNÇÕES **/
int lerOpcao(void);
void lerPalavras(void);
float lerNumeroReal(void);
float dobro(float a);
float produto(float a, float b);
float areaRectangulo(float altura, float largura);
float areaTriangulo(float base, float altura);
float areaCircunferencia(float raio);
float raizQuadrada(float x);
void simuladorEuromilhoes(void);
float conversorMonetario(float escudos);
float mediaNotas(void);
float menorDeDois(float a, float b);
float menorDeTres(float a, float b, float c);
float menorDeTres2(float a, float b, float c);
int factorial(int n);
int lerNumeroInteiro(void);
void beep(void);
char lerCaracter(void);
int digito(char letra);
float potencia(float base, int ordem);

int main()
{
    int op;
    float resultado, x, y;
    int n, resultado2;

    do
    {
        //limpa o ecrã
        system("cls");

        //printfs para menu
        printf(" 1 - Cinco Palavras\t\t 2 - Dobro\n");
        printf(" 3 - Produto\t\t\t 4 - Area Rectangulo\n");
        printf(" 5 - Area de Triangulo\t\t 6 - Area Circunferencia\n");
        printf(" 7 - Raiz Quadrada\t\t 8 - Simulador Euromilhoes\n");
        printf(" 9 - Conversor Monetario\t10 - Media Notas\n");
        printf("11 - Comparador 2 Numeros\t12 - Comparador 3 Numeros\n");
        printf("13 - Factorial\t\t\t14 - Alarme\n");
        printf("15 - Confirmar Digito\t\t16 - Confirmar Consoante\n");
        printf("17 - Confirmar Vogal\t\t18 - Contar Letras\n");
        printf("19 - Confirmar Minuscula\t20 - ToUpper\n");
        printf("21 - Potencia Orden N\t\t22 - Sair\n");

        printf("\n: ");
        //ler opcao usando funcao criada
        op = lerOpcao();
        switch(op)
        {
        case 1:
            //esta função limpa o ecrã
            system("cls");

            printf("+ Ler Palavras +\n\n\n");
            lerPalavras();

            system("pause");
            break;
        case 2:
            system("cls");

            printf("+ Dobro +\n\n\n");
            printf("Insira o valor: ");

            x = lerNumeroReal();
            resultado = dobro(x);

            printf("\nDobro de %.2f: %.2f\n\n", x, resultado);
            system("pause");
            break;
        case 3:
            system("cls");

            printf("+ Produto +\n\n\n");
            printf("Insira o valor: ");
            x = lerNumeroReal();
            printf("Insira o valor: ");
            y = lerNumeroReal();

            resultado = produto(x, y);

            printf("\nProduto de %.2f * %.2f: %.2f\n\n", x, y, resultado);
            system("pause");
            break;
        case 4:
            system("cls");

            printf("+ Area Rectangulo +\n\n\n");
            printf("Insira a altura: ");
            x = lerNumeroReal();
            printf("Insira a largura: ");
            y = lerNumeroReal();

            resultado = areaRectangulo(x, y);

            printf("\Area encontrada: %.2f\n\n", resultado);
            system("pause");
            break;

        case 5:
            system("cls");

            printf("+ Area Triangulo +\n\n\n");
            printf("Insira a base: ");
            x = lerNumeroReal();
            printf("Insira a altura: ");
            y = lerNumeroReal();

            resultado = areaTriangulo(x, y);

            printf("\Area encontrada: %.2f\n\n", resultado);
            system("pause");
            break;
        case 6:
            system("cls");

            printf("+ Area Circunferencia +\n\n\n");
            printf("Insira a raio: ");
            x = lerNumeroReal();

            resultado = areaCircunferencia(x);

            printf("\Area encontrada: %.2f\n\n", resultado);
            system("pause");
            break;

        case 7:
            system("cls");

            printf("+ Rais Quadrada +\n\n\n");
            printf("Insira o valor: ");
            x = lerNumeroReal();

            resultado = raizQuadrada(x);

            printf("\nRaiz: %.2f\n\n", resultado);
            system("pause");
            break;
        case 8:
            system("cls");
            printf("+ Simulador Euromilhoes +\n\n\n");
            printf("Chave: ");

            simuladorEuromilhoes();

            printf("\n\n");
            system("pause");
            break;
        case 9:
            system("cls");
            printf("+ Conversor Monetario +\n\n\n");
            printf("Indique o valor em escudos: ");
            x = lerNumeroReal();

            resultado = conversorMonetario(x);

            printf("\nValor em Euros: %.2f\n\n",
                   resultado);
            system("pause");
            break;
        case 10:
            system("cls");
            printf("+ Media de Notas +\n\n\n");

            resultado = mediaNotas();

            printf("\nMedia: %.2f\n\n", resultado);
            system("pause");
            break;

        case 11:
            system("cls");
            printf("+ Menor de Dois +\n\n\n");

            printf("A: ");
            x = lerNumeroReal();
            printf("B: ");
            y = lerNumeroReal();

            resultado = menorDeDois(x, y);

            printf("\nMenor: %.2f\n\n", resultado);
            system("pause");
            break;
        case 12:
            system("cls");
            printf("+ Menor de Dois +\n\n\n");

            printf("A: ");
            x = lerNumeroReal();
            printf("B: ");
            y = lerNumeroReal();

            resultado = menorDeDois(x, y);

            printf("\nMenor: %.2f\n\n", resultado);
            system("pause");
            break;
        case 13:
            system("cls");
            printf("+ Factorial +\n\n\n");

            printf("N: ");
            n = lerNumeroInteiro();
            resultado2 = factorial(n);

            printf("\nFactorial: %d\n\n", resultado2);
            system("pause");
            break;
        case 14:
            system("cls");
            printf("+ Alarme +\n\n\n");

            beep();

            system("pause");
            break;
        case 15:
            system("cls");
            printf("+ Digito +\n\n\n");
            printf("D: ");
            if(digito(lerCaracter()) == 1)
            {
                printf("É um digito.\n\n");
            }
            else
            {
                printf("Não é um digito.\n\n");
            }

            system("pause");
            break;
        case 21:
            system("cls");
            printf("+ Potencia Ordem N +\n\n\n");

            printf("Indique a base: ");
            x = lerNumeroReal();
            printf("Indique a ordem: ");
            n = lerNumeroInteiro();

            resultado = potencia(x, n);

            printf("Potencia: %.2f\n\n", resultado);

            system("pause");
            break;

        }

    }
    while(op != 22);

    return 0;
} //fim da função main

/** ZONA DE IMPLEMENTAÇÃO DE FUNÇÕES **/
float potencia(float base, int ordem)
{
    int i;
    float resultado = 1;
    for(i = 0; i < ordem; i++)
    {
        resultado *= base;
    }

    return resultado;
}

int digito(char letra)
{
    if(letra >= '0' && letra <= '9')
    {
        return 1;
    }

    return 0;
}


char lerCaracter(void)
{
    char lixo, x;

    scanf("%c", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}

void beep(void)
{
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("\a");
    }
}

int lerNumeroInteiro(void)
{
    int x;
    char lixo;

    scanf("%d", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}

int factorial(int n)
{
    int f = 1;

    if(n > 0)
    {
        do
        {
            f *= n;
            n = n -1;
        }
        while( n != 1);
    }

    return f;
}


float menorDeTres2(float a, float b, float c)
{
    return menorDeDois(a, menorDeDois(b, c));
}

float menorDeTres(float a, float b, float c)
{
    if(a < b && a < c)
    {
        return a;
    }
    else if(b < a && b < c)
    {
        return b;
    }
    else if(c < a && c < b)
    {
        return c;
    }
    else
    {
        return a;
    }
}

float menorDeDois(float a, float b)
{
    if(a < b)
    {
        return a;
    }
    else if(b < a)
    {
        return b;
    }
    else
    {
        return a;//ou o b, são iguais!
    }
}

float mediaNotas(void)
{
    float soma = 0, nrNotas = 0, nota;
    do
    {
        printf(": ");
        nota = lerNumeroReal();
        if(nota >= 0 && nota <= 20)
        {
            soma = soma + nota;
            nrNotas = nrNotas + 1;
        }
    }
    while(nota >= 0);

    if(nrNotas == 0)
    {
        return 0;
    }
    return soma / nrNotas;
}

float conversorMonetario(float escudos)
{
    return escudos / 200.482;
}

void simuladorEuromilhoes(void)
{
    int n1, n2, n3, n4, n5, e1, e2;
    srand(time(NULL));//definir semente de números aleatórios

    //obter números aleatórios
    n1 = (rand() % 49 ) + 1;
    n2 = (rand() % 49 ) + 1;
    n3 = (rand() % 49 ) + 1;
    n4 = (rand() % 49 ) + 1;
    n5 = (rand() % 49 ) + 1;
    e1 = (rand() % 8 ) + 1;
    e2 = (rand() % 8 ) + 1;

    printf("%d - %d - %d - %d - %d * %d - %d", n1, n2, n3,
           n4, n5, e1, e2);
}

float raizQuadrada(float x)
{
    return sqrt(x);
}

float areaCircunferencia(float raio)
{
    return 3.14 * raio * raio;
}

float areaTriangulo(float base, float altura)
{
    return (base * altura) / 2;
}

float areaRectangulo(float altura, float largura)
{
    return altura * largura;
}

float produto(float a, float b)
{
    return a * b;
}

float dobro(float a)
{
    return 2 * a;
}

float lerNumeroReal(void)
{
    float x;
    char lixo;

    scanf("%f", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}

void lerPalavras(void)
{
    char p1[25], p2[25], p3[25], p4[25], p5[25];

    printf("P: ");
    scanf("%s", p1);
    printf("P: ");
    scanf("%s", p2);
    printf("P: ");
    scanf("%s", p3);
    printf("P: ");
    scanf("%s", p4);
    printf("P: ");
    scanf("%s", p5);

    printf("Palavras lidas: %s, %s, %s, %s, %s\n\n", p1, p2, p3, p4, p5);
}

int lerOpcao(void)
{
    int x;
    char lixo;

    scanf("%d", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}
