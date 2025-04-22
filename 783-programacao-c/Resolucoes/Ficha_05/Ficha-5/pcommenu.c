/**
 * Ficha 5 - Programa Completo com Menu
 *
 * pcommenu.c
 *
 * O código implementa um programa composto por um
 * menu de 6 opções e permite o acesso a cada uma das
 * opções, sendo que a 6ª provoca o fecho do programa.
 *
 * Cada uma das opções oferece uma pequena funcionalidade
 * implementada isoladamente e que aqui, em conjunto com as
 * restantes, oferece um programa completo.
 *
 * Podemos ver o uso de ciclos do... while, estruturas
 * switch e if/if... else, bem como as tradicionais leituras
 * de dados ou a escrita de texto no ecrã.
 *
 * Deve ser ignorado o código que limpa o ecrã e o código
 * que remove o lixo do buffer por ainda não ter sido leccionado.
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

int main()
{
    //Declaração das várias variáveis necessárias ao longo
    //do programa
    char op, lixo, letra, palavra[51];
    float largura, altura, area, base, lado, perimetro;
    int vogais, espacos, outros, inseridas, soma;

    do
    {
        //limpar ecrã
        system("cls");

        printf("< Programa Completo com Menu >\n\n\n");
        printf("1 - Área de Rectângulo\n");
        printf("2 - Área de Triângulo\n");
        printf("3 - Perímetro\n");
        printf("4 - Contar Letras\n");
        printf("5 - Média de Palavras\n");
        printf("6 - Sair\n");
        printf("\n: ");

        scanf("%c", &op);

        //limpar buffer
        while ((lixo = getchar()) != '\n' && lixo != EOF);

        switch(op)
        {
        case '1':
            //limpar ecrã e iniciar variáveis
            system("cls");
            area = largura = altura = 0.0;

            printf("Largura: ");
            scanf("%f", &largura);

            printf("Altura: ");
            scanf("%f", &altura);
            while ((lixo = getchar()) != '\n' && lixo != EOF);

            area = largura * altura;

            printf("\nÁrea Determinada: %.4f", area);
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecrã
            getchar();
            break;
        case '2':
            //limpar ecrã e iniciar variáveis
            system("cls");
            base = altura = area = 0.0;

            printf("Base: ");
            scanf("%f", &base);

            printf("Altura: ");
            scanf("%f", &altura);
            while ((lixo = getchar()) != '\n' && lixo != EOF);

            area = (base * altura) / 2;

            printf("\nÁrea Determinada: %.4f", area);
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecrã
            getchar();
            break;
        case '3':
            //iniciar variáveis
            lado = perimetro = 0;

            do
            {
                //limpar ecrã
                system("cls");

                printf("Valor de um Lado: ");
                scanf("%f", &lado);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(lado > -1)
                {
                    perimetro += lado;
                }
                printf("\n");
            }
            while(lado != -1);

            printf("\nPerímetro Determinado: %.4f", perimetro);
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecrã
            getchar();
            break;
        case '4':
            //iniciar variáveis
            letra = '\0';
            vogais = espacos = outros = 0;

            do
            {
                system("cls");
                printf("< Contagem de Letras ");
                if(vogais != 0 || espacos != 0 || outros != 0)
                {
                    printf("\tV: %d\tE: %d\tO: %d\t", vogais, espacos,
                           outros);
                }
                printf(">\n\n");

                printf("Letra: ");
                scanf("%c", &letra);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(letra == ' ')
                {
                    espacos++;
                }
                else if(letra == 'a' || letra == 'e' ||
                        letra == 'i' || letra == 'o' ||
                        letra == 'u' || letra == 'A' ||
                        letra == 'E' || letra == 'I' ||
                        letra == 'O' || letra == 'U')
                {
                    vogais++;
                }
                else
                {
                    outros++;
                }
            }
            while(letra != '#');

            printf("\nResumo: %d vogais, %d espaços e %d outras letras.",
                   vogais, espacos, outros);
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecrã
            getchar();
            break;
        case '5':
            //iniciar variáveis
            palavra[0] = '\0';
            inseridas = soma = 0;

            do
            {
                system("cls");
                printf("< Média de Palavras \tInseridas: %d>\n\n\n", inseridas);
                printf("Palavra: ");
                scanf("%s", palavra);
                while ((lixo = getchar()) != '\n' && lixo != EOF);

                if(strcmp("terminar", palavra) != 0)
                {
                    soma += strlen(palavra);
                    inseridas++;
                }
            }
            while(strcmp("terminar", palavra) != 0);

            printf("\nInseridas %d palavras com uma média de %.1f letras.",
                   inseridas, (float)soma / inseridas);
            printf("\n\nPrima \"enter\" para continuar...");

            //parar o ecrã
            getchar();
            break;
        }
    }
    while(op != '6');

    return 0;
}
