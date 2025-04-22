/**
 * Resolução da Avaliação do Módulo 783
 *
 * avaliacao.c
 *
 * Resolução exemplo do Programa de Auxílio Matemático
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

int main()
{

    float area, altura, largura, media, base, raio,
    perimetro, nota, soma;
    int nr_areas, nr_notas, i;
    char op, lixo;

    do
    {
        system("cls");

        printf("< Auxiliar Matemático >\n\n\n");
        printf("1 - Área de Rectângulos com Média\n");
        printf("2 - Área de 5 Triângulos\n");
        printf("3 - Área de Circunferências\n");
        printf("4 - Perímetro de 5 Circunferências\n");
        printf("5 - Média Ponderada de Notas\n");
        printf("6 - Sair\n");

        printf("\n: ");
        scanf("%c", &op);

        //limpar buffer
        while ((lixo = getchar()) != '\n' && lixo != EOF);

        switch(op)
        {
        case '1'://área de rectângulo
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

                    printf("\nÁrea Determinada: %.4f", area);
                    printf("\n\nPrima \"enter\" para continuar...");

                    //parar o ecrã
                    getchar();
                }
            }
            while(largura >= 0 && altura >= 0);

            media = area / nr_areas;

            printf("\nMédia de Áreas: %.2f", media);
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecrã
            getchar();

            break;
        case '2'://área de 5 triângulos

            area = altura = base = 0.0;

            system("cls");
            printf("< Área de 5 Triângulos >\n\n");
            for(i = 1; i <= 5; i++)
            {
                printf("\nBase do %dº Triângulo: ", i);
                scanf("%f", &base);

                printf("\nAltura do %dº Triângulo: ", i);
                scanf("%f", &altura);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(base > 0 && altura > 0)
                {
                    area = (base * altura) / 2;
                    printf("\nÁrea do %dº Triângulo: %.4f", i, area);
                    printf("\n\nPrima \"enter\" para continuar...");

                    //parar o ecrã
                    getchar();
                }
            }

            system("cls");
            printf("\nTodas as Áreas Encontradas");
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecrã
            getchar();

            break;
        case '3'://área de circunferências
            area = raio = 0.0;
            while(raio >= 0)
            {
                system("cls");
                printf("< Área de Circunferências >\n\n\n");
                printf("Raio: ");

                scanf("%f", &raio);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(raio > 0)
                {
                    area = raio * raio * 3.14;

                    printf("\nÁrea Encontrada: %.4f", area);
                    printf("\n\nPrima \"enter\" para continuar...");

                    //parar o ecrã
                    getchar();
                }

            }

            system("cls");
            printf("\nTodas as Áreas Encontradas");
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecrã
            getchar();
            break;
        case '4'://perímetro de 5 circungerências

            perimetro = raio = 0.0;
            system("cls");
            printf("< Perímetro de 5 Circunferências >\n\n");
            for(i = 1; i <= 5; i++)
            {
                printf("Raio da %dª Circunferência: ", i);

                scanf("%f", &raio);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(raio > 0)
                {
                    perimetro = 2 * raio * 3.14;
                    printf("\nPerímetro da %dª Circunferência: %.4f", i, perimetro);
                    printf("\n\nPrima \"enter\" para continuar...");

                    //parar o ecrã
                    getchar();
                }
            }

            printf("\nTodos os Perímetros Calculados");
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecrã
            getchar();
            break;
        case '5'://média ponderada
            soma = media = nota = 0.0;
            nr_notas = 0;

            do
            {
                system("cls");
                printf("< Média Simples >\n\n\n");
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

            printf("\nMédia de Notas: %.2f", media);
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecrã
            getchar();
        }
    }
    while(op != '6');

    return 0;
}
