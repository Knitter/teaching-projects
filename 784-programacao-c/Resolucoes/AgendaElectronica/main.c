/**
 * Agenda Electrónica
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

struct contacto
{
    char nome[151];
    char telefone[10];
    char email[201];
    int dia, mes, ano;
};

char lerCaracter(void);
int lerInteiro(void);
void lerString(char *texto);
struct contacto inserirContacto(void);
void imprimirContacto(struct contacto c);

int main()
{
    char opcao = '\0';
    struct contacto contactos[100];
    int existentes = 0, i;
    do
    {
        system("cls");
        printf("- Agenda Electronica -\n\n\n");
        printf("1 - Inserir Contacto\n");
        printf("2 - Listar Contactos\n");
        printf("3 - Sair\n");
        printf("\n: ");

        opcao = lerCaracter();
        switch(opcao)
        {
        case '1':
            system("cls");
            printf("+ Novo Contacto +\n\n\n");
            contactos[existentes++] = inserirContacto();
            printf("\n\n");
            system("pause");
            break;
        case '2':
            system("cls");
            printf("+ Lista de Contactos +\n\n\n");
            for(i = 0; i < existentes; i++)
            {
                imprimirContacto(contactos[i]);
            }
            printf("\n\n");
            system("pause");
            break;
        }
    }
    while(opcao != '3');

    return 0;
}

/** IMPLEMENTAÇÃO DE FUNÇÕES **/
void imprimirContacto(struct contacto c)
{
    printf("Nome: %s\n", c.nome);
    printf("Telefone: %s\n", c.telefone);
    printf("E-mail: %s\n", c.email);
    printf("Data Nascimento: %d/%d/%d\n\n",
           c.dia, c.mes, c.ano);
}

struct contacto inserirContacto(void)
{
    struct contacto novo;

    printf("Nome: ");
    lerString(novo.nome);
    printf("Telefone: ");
    lerString(novo.telefone);
    printf("E-mail: ");
    lerString(novo.email);
    printf("Dia de Nascimento: ");
    novo.dia = lerInteiro();
    printf("Mes de Nascimento: ");
    novo.mes = lerInteiro();
    printf("Ano de Nascimento: ");
    novo.ano = lerInteiro();

    return novo;
}

void lerString(char *texto)
{
    char lixo;

    scanf("%[^\n]", texto);
    while( (lixo = getchar()) != '\n' &&
            lixo != EOF );
}

int lerInteiro(void)
{
    char lixo;
    int numero;

    scanf("%d", &numero);
    while( (lixo = getchar()) != '\n' &&
            lixo != EOF );

    return numero;
}

char lerCaracter(void)
{
    char lixo, caracter;

    scanf("%c", &caracter);
    while( (lixo = getchar()) != '\n' &&
            lixo != EOF );

    return caracter;
}
