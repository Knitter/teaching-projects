/**
 * Resolução da Avaliação do Módulo 782
 *
 * avaliacao.c
 *
 * Copyright (C) 2010 Sérgio Lopesi
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
    int abertura = 0, dia, mes, ano, quantidade1, quantidade2, quantidade3;
    float total, subtotal, valor_iva, preco1, preco2, preco3;
    char produto1[51], produto2[51], produto3[51];

    do
    {
        system("cls");
        printf("1 - Data de Abertura\n");
        printf("2 - Registar Compra\n");
        printf("3 - Sair");
        printf("\n\nOpcao: ");

        scanf("%c", &opcao);
        limpar();

        switch(opcao)
        {
        case '1':
            system("cls");
            printf("Insira a data de abertura no formato dd/mm/aaaa");
            do
            {
                printf("\n: ");
                scanf("%d/%d/%d", &dia, &mes, &ano);
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
                printf("Nome do produto 1: ");
                scanf("%s", produto1);
                limpar();

                printf("Quantidade do produto 1: ");
                scanf("%d", &quantidade1);
                limpar();

                printf("Preço unitário do produto 1: ");
                scanf("%f", &preco1);
                limpar();

                printf("Nome do produto 2: ");
                scanf("%s", produto2);
                limpar();

                printf("Quantidade do produto 2: ");
                scanf("%d", &quantidade2);
                limpar();

                printf("Preço unitário do produto 2: ");
                scanf("%f", &preco2);
                limpar();

                printf("Nome do produto 3: ");
                scanf("%s", produto3);
                limpar();

                printf("Quantidade do produto 3: ");
                scanf("%d", &quantidade3);
                limpar();

                printf("Preço unitário do produto 3: ");
                scanf("%f", &preco3);
                limpar();

                subtotal = preco1 * quantidade1 + preco2 * quantidade2 + preco3 * quantidade3;
                valor_iva = subtotal * IVA;
                total = subtotal + valor_iva;

                system("cls");
                printf("********** Factura **********\n\n\n");

                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187);
                printf("%cData: %d-%d-%d                      %c\n", 186, ano, mes, dia, 186);
                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
                printf("%c  Produto   %c Quantidade %c    Preco   %c\n", 186, 186, 186, 186);
                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
                printf("%c %-11s%c %11d%c %11.2f%c\n", 186, produto1, 186, quantidade1, 186, preco1, 186);
                printf("%c %-11s%c %11d%c %11.2f%c\n", 186, produto2, 186, quantidade2, 186, preco2, 186);
                printf("%c %-11s%c %11d%c %11.2f%c\n", 186, produto3, 186, quantidade3, 186, preco3, 186);
                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);

                printf("%c Sub-total %27.2f%c\n", 186, subtotal, 186);
                printf("%c Iva %33.2f%c\n", 186, valor_iva, 186);
                printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 186);
                printf("%c Total %31.2f%c\n", 186, total, 186);

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
