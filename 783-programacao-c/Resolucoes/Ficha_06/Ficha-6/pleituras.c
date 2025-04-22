/**
 * Ficha 6 - Programa de Leituras
 *
 * pleituras.c.
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
#include <stdlib.h>

int main()
{
    char op, lixo;

    char nome_cliente1[51] = "", nome_cliente2[51] = "",
    nome_cliente3[51] = "", nome_cliente4[51] = "",
    nome_cliente5[51] = "", morada_cliente1[51] = "",
    morada_cliente2[51] = "", morada_cliente3[51] = "",
    morada_cliente4[51] = "", morada_cliente5[51] = "",
    telefone_cliente1[10] = "", telefone_cliente2[10] = "",
    telefone_cliente3[10] = "", telefone_cliente4[51] = "",
    telefone_cliente5[10] = "";

    float leitura1 = 0.0, leitura2 = 0.0, leitura3 = 0.0,
    leitura4 = 0.0, leitura5 = 0.0;
    do
    {
        system("cls");
        printf("< Registo de Leituras >\n\n\n");
        printf("1 - Inserir Dados de Clientes\n");
        printf("2 - Inserir Leituras\n");
        printf("3 - Consultar Dados de Clientes\n");
        printf("4 - Ver Todas as Moradas\n");
        printf("5 - Sair\n");

        printf("\n: ");
        scanf("%c", &op);

        //limpar buffer
        while ((lixo = getchar()) != '\n' && lixo != EOF);

        switch(op)
        {
        case '1':
            //Primeiro cliente
            system("cls");
            printf("< Cliente 1 >\n\n\n");
            printf("Nome: ");
            scanf("%[^\n]", nome_cliente1);
            while ((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Morada: ");
            scanf("%[^\n]", morada_cliente1);
            while ((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Telefone: ");
            scanf("%s", telefone_cliente1);
            while ((lixo = getchar()) != '\n' && lixo != EOF);

            //Segundo cliente
            system("cls");
            printf("< Cliente 2 >\n\n\n");
            printf("Nome: ");
            scanf("%[^\n]", nome_cliente2);
            while ((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Morada: ");
            scanf("%[^\n]", morada_cliente2);
            while ((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Telefone: ");
            scanf("%s", telefone_cliente2);
            while ((lixo = getchar()) != '\n' && lixo != EOF);

            //Terceiro cliente
            system("cls");
            printf("< Cliente 3 >\n\n\n");
            printf("Nome: ");
            scanf("%[^\n]", nome_cliente3);
            while ((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Morada: ");
            scanf("%[^\n]", morada_cliente3);
            while ((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Telefone: ");
            scanf("%s", telefone_cliente3);
            while ((lixo = getchar()) != '\n' && lixo != EOF);

            //Quarto cliente
            system("cls");
            printf("< Cliente 4 >\n\n\n");
            printf("Nome: ");
            scanf("%[^\n]", nome_cliente4);
            while ((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Morada: ");
            scanf("%[^\n]", morada_cliente4);
            while ((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Telefone: ");
            scanf("%s", telefone_cliente4);
            while ((lixo = getchar()) != '\n' && lixo != EOF);

            //Quinto cliente
            system("cls");
            printf("< Cliente 5 >\n\n\n");
            printf("Nome: ");
            scanf("%[^\n]", nome_cliente5);
            while ((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Morada: ");
            scanf("%[^\n]", morada_cliente5);
            while ((lixo = getchar()) != '\n' && lixo != EOF);
            printf("Telefone: ");
            scanf("%s", telefone_cliente5);
            while ((lixo = getchar()) != '\n' && lixo != EOF);

            system("cls");
            printf("\nTodos os dados lidos com sucesso.");
            printf("\n\nPrima \"enter\" para continuar...");

            getchar();
            break;
        case '2':
            system("cls");
            printf("< Leitura do Cliente 1 >\n\n\n");
            printf("Valor: ");
            scanf("%f", &leitura1);

            system("cls");
            printf("< Leitura do Cliente 2 >\n\n\n");
            printf("Valor: ");
            scanf("%f", &leitura2);

            system("cls");
            printf("< Leitura do Cliente 3 >\n\n\n");
            printf("Valor: ");
            scanf("%f", &leitura3);

            system("cls");
            printf("< Leitura do Cliente 4 >\n\n\n");
            printf("Valor: ");
            scanf("%f", &leitura4);

            system("cls");
            printf("< Leitura do Cliente 5 >\n\n\n");
            printf("Valor: ");
            scanf("%f", &leitura5);

            //limpar buffer
            while ((lixo = getchar()) != '\n' && lixo != EOF);

            system("cls");
            printf("\nTodos os valores lidos com sucesso.");
            printf("\n\nPrima \"enter\" para continuar...");

            getchar();
            break;
        case '3':
            system("cls");

            printf("< Dados Registados >\n\n\n");

            printf("Cliente %s\n", nome_cliente1);
            printf("%s\n", morada_cliente1);
            printf("Telf.: %s\,", telefone_cliente1);
            printf("Gastos: %.4f\n\n", leitura1);

            printf("Cliente %s\n", nome_cliente2);
            printf("%s\n", morada_cliente2);
            printf("Telf.: %s\,", telefone_cliente2);
            printf("Gastos: %.4f\n\n", leitura2);

            printf("Cliente %s\n", nome_cliente3);
            printf("%s\n", morada_cliente3);
            printf("Telf.: %s\,", telefone_cliente3);
            printf("Gastos: %.4f\n\n", leitura3);

            printf("Cliente %s\n", nome_cliente4);
            printf("%s\n", morada_cliente4);
            printf("Telf.: %s\,", telefone_cliente4);
            printf("Gastos: %.4f\n\n", leitura4);

            printf("Cliente %s\n", nome_cliente5);
            printf("%s\n", morada_cliente5);
            printf("Telf.: %s\,", telefone_cliente5);
            printf("Gastos: %.4f\n\n", leitura5);

            printf("\n\nPrima \"enter\" para continuar...");

            getchar();

            break;
        case '4':
            system("cls");

            printf("< Lista de Moradas >\n\n\n");

            printf("%s\n\n", morada_cliente1);
            printf("%s\n\n", morada_cliente2);
            printf("%s\n\n", morada_cliente3);
            printf("%s\n\n", morada_cliente4);
            printf("%s\n\n", morada_cliente5);

            printf("\n\nPrima \"enter\" para continuar...");

            getchar();
            break;
        }
    }
    while(op != '5');

    return 0;
}
