/**
 * Avaliação do módulo 782
 *
 * avaliacao.c
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

#define MAX_NOME_PRODUTO 10
#define ANO_CURRENTE 2010
#define DIAS_FEVEREIRO 28
#define IVA 0.21

void limpar(void);
char ler_opcao(void);
int validar_data(int, int, int);

int main(int argc, char *argv[])
{
    char opcao;
    int abertura = 0;

    //Declare as variáveis necessárias [ 1 ]
    #
    //FIM DE [ 1 ]
    do
    {
        system("cls");
        printf("1 - Data de Abertura\n");
        printf("2 - Registar Compra\n");
        printf("3 - Sair");
        printf("\n\nOpcao: ");
        //Escreva a scanf para ler um carácter [ 2 ]
        #
        //FIM DE [ 2 ]
        limpar();

        switch(opcao)
        {
        case '1':
            system("cls");
            printf("Insira a data de abertura no formato dd/mm/aaaa");
            do
            {
                printf("\n: ");
                //Escreva um scanf para ler uma data no formato indicado pelo printf anterior [ 3 ]
                #
                //FIM DE [ 3 ]
                limpar();
            }
            while(validar_data(dia, mes, ano) < 0);
            abertura = 1;
            printf("\n\nData introduzida com sucesso. Prima \"enter\" para continuar.");
            getchar();

            break;
        case '2':
            system("cls");
            if(abertura)
            {
                printf("*********** Insira os dados dos 3 produtos **********\n\n");
                //Escreva o código necessário para ler os dados do produto 1 [ 4 ]
                #
                //FIM DE [ 4 ]

                //Escreva o código necessário para ler os dados do produto 2 [ 5 ]
                #
                //FIM DE [ 5 ]

                //Escreva o código necessário para ler os dados do produto 3 [ 6 ]
                #
                //FIM DE [ 6 ]

                //Faça as contas necessárias para calcular o total, o IVA e o sub-total [ 7 ]
                #
                //FIM DE [ 7 ]

                limpar();
                system("cls");
                printf("********** Factura **********\n\n\n");

                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);

                //Escreva o printf necessário para apresentar a data no formato aaaa-mm-dd [ 7 ]
                #
                //FIM DE [ 7 ]

                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
                printf("%c  Produto   %c Quantidade %c    Preco   %c\n", 186, 186, 186, 186);
                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);

                //Insirar as variáveis adequadas na posição correspondente [ 8 ]
                printf("%c %-11s%c %11d%c %11.2f%c\n", 186, #, 186, #, 186, #, 186);
                printf("%c %-11s%c %11d%c %11.2f%c\n", 186, #, 186, #, 186, #, 186);
                printf("%c %-11s%c %11d%c %11.2f%c\n", 186, #, 186, #, 186, #, 186);
                //FIM DE [ 8 ]
                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);

                //Complete os especificadores %f seguintes para que o
                //número tenha apenas duas casas decimais e coloque
                //as variáveis nos locais indicados [ 9 ]
                printf("%c Sub-total %27f%c\n", 186, #, 186);
                printf("%c Iva %33f%c\n", 186, #, 186);
                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 186);
                printf("%c Total %31f%c\n", 186, #, 186);
                //FIM DE [ 9 ]

                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188);

                printf("\n\nPrima \"enter\" para continuar.");
                getchar();
            }
            break;
        }
    }
    while(opcao != '3');

    printf("\n\nObrigado pela sua preferencia.\n\n\n");

    return 0;
}

//FIM DO PROGRAMA... FUNÇÕES AUXILIARES
void limpar(void)
{
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int validar_data(int dia, int mes, int ano)
{
    int tamanhos[] = {31, DIAS_FEVEREIRO, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(ano != ANO_CURRENTE)
    {
        printf("\nAno invalido.");
        return -1;
    }

    if(mes < 1 || mes > 12)
    {
        printf("\nMes invalido.");
        return -2;
    }

    if(dia < 1 || dia > 31 || dia > tamanhos[mes])
    {
        printf("\nO numero de dias para o mes indicado esta errado.");
        return -3;
    }
}
