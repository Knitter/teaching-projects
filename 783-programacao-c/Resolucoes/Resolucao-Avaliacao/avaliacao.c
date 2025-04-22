/**
 * Resolu��o da Avalia��o do M�dulo 783
 *
 * avaliacao.c
 *
 * Resolu��o exemplo do Programa de Aux�lio Matem�tico
 *
 * Copyright (C) 2010 S�rgio Lopes
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

int main()
{

    float area, altura, largura, media, base, raio,
    perimetro, nota, soma;
    int nr_areas, nr_notas, i;
    char op, lixo;

    do
    {
        system("cls");

        printf("< Auxiliar Matem�tico >\n\n\n");
        printf("1 - �rea de Rect�ngulos com M�dia\n");
        printf("2 - �rea de 5 Tri�ngulos\n");
        printf("3 - �rea de Circunfer�ncias\n");
        printf("4 - Per�metro de 5 Circunfer�ncias\n");
        printf("5 - M�dia Ponderada de Notas\n");
        printf("6 - Sair\n");

        printf("\n: ");
        scanf("%c", &op);

        //limpar buffer
        while ((lixo = getchar()) != '\n' && lixo != EOF);

        switch(op)
        {
        case '1'://�rea de rect�ngulo
            area = altura = largura = media = 0.0;
            nr_areas = 0;

            do
            {
                system("cls");

                printf("Largura: ");
                scanf("%f", &largura);

                printf("Altura: ");
                scanf("%f", &altura);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(largura > 0 && altura > 0)
                {
                    area = largura * altura;
                    soma += area;
                    nr_areas++;

                    printf("\n�rea Determinada: %.4f", area);
                    printf("\n\nPrima \"enter\" para continuar...");

                    //parar o ecr�
                    getchar();
                }
            }
            while(largura >= 0 && altura >= 0);

            media = area / nr_areas;

            printf("\nM�dia de �reas: %.2f", media);
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecr�
            getchar();

            break;
        case '2'://�rea de 5 tri�ngulos

            area = altura = base = 0.0;

            system("cls");
            printf("< �rea de 5 Tri�ngulos >\n\n");
            for(i = 1; i <= 5; i++)
            {
                printf("\nBase do %d� Tri�ngulo: ", i);
                scanf("%f", &base);

                printf("\nAltura do %d� Tri�ngulo: ", i);
                scanf("%f", &altura);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(base > 0 && altura > 0)
                {
                    area = (base * altura) / 2;
                    printf("\n�rea do %d� Tri�ngulo: %.4f", i, area);
                    printf("\n\nPrima \"enter\" para continuar...");

                    //parar o ecr�
                    getchar();
                }
            }

            system("cls");
            printf("\nTodas as �reas Encontradas");
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecr�
            getchar();

            break;
        case '3'://�rea de circunfer�ncias
            area = raio = 0.0;
            while(raio >= 0)
            {
                system("cls");
                printf("< �rea de Circunfer�ncias >\n\n\n");
                printf("Raio: ");

                scanf("%f", &raio);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(raio > 0)
                {
                    area = raio * raio * 3.14;

                    printf("\n�rea Encontrada: %.4f", area);
                    printf("\n\nPrima \"enter\" para continuar...");

                    //parar o ecr�
                    getchar();
                }

            }

            system("cls");
            printf("\nTodas as �reas Encontradas");
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecr�
            getchar();
            break;
        case '4'://per�metro de 5 circunger�ncias

            perimetro = raio = 0.0;
            system("cls");
            printf("< Per�metro de 5 Circunfer�ncias >\n\n");
            for(i = 1; i <= 5; i++)
            {
                printf("Raio da %d� Circunfer�ncia: ", i);

                scanf("%f", &raio);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(raio > 0)
                {
                    perimetro = 2 * raio * 3.14;
                    printf("\nPer�metro da %d� Circunfer�ncia: %.4f", i, perimetro);
                    printf("\n\nPrima \"enter\" para continuar...");

                    //parar o ecr�
                    getchar();
                }
            }

            printf("\nTodos os Per�metros Calculados");
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecr�
            getchar();
            break;
        case '5'://m�dia ponderada
            soma = media = nota = 0.0;
            nr_notas = 0;

            do
            {
                system("cls");
                printf("< M�dia Simples >\n\n\n");
                printf("Indique a nota: ");

                scanf("%f", &nota);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(nota >= 0 && nota <= 20)
                {
                    soma += nota;
                    nr_notas++;
                }
            }
            while(nota >= 0);

            media = soma / nr_notas;

            printf("\nM�dia de Notas: %.2f", media);
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecr�
            getchar();
        }
    }
    while(op != '6');

    return 0;
}
