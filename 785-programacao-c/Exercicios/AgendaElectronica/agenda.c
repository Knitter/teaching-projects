/**
 * Agenda Electrónica
 *
 * agenda.c
 *
 * Programa que permite simular uma agenda electrónica com
 * gravação de dados.
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
#include "estruturas.h"
#include "utils.h"

#define MAX_CONTACTOS 100

int gravarDados(char *nomeFicheiro, struct contacto *contactos, int existentes);
int lerDados(char *nomeFicheiro, struct contacto *contactos, int *existentes);

int main()
{
    char opcao = '\0', ficheiro[500];
    struct contacto contactos[MAX_CONTACTOS];
    int existentes = 0, i;
    do
    {
        system("cls");
        printf("+ Agenda Electronica +\n\n\n");
        printf("1 - Inserir Contacto\n");
        printf("2 - Listar Contactos\n");
        printf("3 - Ler Ficheiro\n");
        printf("4 - Guardar Ficheiro\n");
        printf("5 - Sair\n");
        printf("\n: ");

        opcao = lerCaracter();
        switch(opcao)
        {
        case '1':
            system("cls");
            printf("+ Novo Contacto +\n\n\n");
            if(existentes < MAX_CONTACTOS)
            {
                contactos[existentes++] = inserirContacto();
                printf("\n\n");
            }
            system("pause");
            break;
        case '2':
            system("cls");
            printf("+ Lista de Contactos +\n\n\n");
            for(i = 0; i < existentes; i++)
            {
                imprimirContacto(&contactos[i]);
                printf("\n");
            }
            printf("\n\n");
            system("pause");
            break;
        case '3':
            system("cls");
            printf("+ Ler Dados +\n\n\n");
            printf("Nome do Ficheiro: ");
            lerString(ficheiro);
            if(lerDados(ficheiro, contactos, &existentes) == 0)
            {
                printf("\nDados lidos com sucesso.\n");
            }
            else
            {
                printf("\nErro ao aceder ao ficheiro.\n");
            }
            system("pause");
            break;
        case '4':
            system("cls");
            printf("+ Gravar Dados +\n\n\n");
            if(existentes == 0)
            {
                printf("Nome do Ficheiro: ");
                lerString(ficheiro);
                if(gravarDados(ficheiro, contactos, existentes) == 0)
                {
                    printf("\nDados Gravados com Sucesso.\n");
                }
                else
                {
                    printf("\nOcorreu um erro a gravar os dados.\n");
                }
            }
            else
            {
                printf("\nNao existem dados para gravar.\n");
            }
            system("pause");

            break;
        }
    }
    while(opcao != '5');

    return 0;
}

int lerDados(char *nomeFicheiro, struct contacto *contactos, int *existentes)
{
    FILE *fi;
    int i;

    if(nomeFicheiro != NULL)
    {
        fi = fopen(nomeFicheiro, "r");
        if(fi != NULL)
        {
            fscanf(fi, "%d", existentes);
            for(i = 0; i < (*existentes); i++)
            {
                fscanf(fi, "\n%[^\n]", contactos[i].nome);
                fscanf(fi, "\n%[^\n]", contactos[i].telefone);
                fscanf(fi, "\n%[^\n]", contactos[i].email);
            }
            fclose(fi);
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int gravarDados(char *nomeFicheiro, struct contacto *contactos, int existentes)
{
    FILE *fi;
    int i;

    if(nomeFicheiro != NULL)
    {
        fi = fopen(nomeFicheiro, "w");
        if(fi != NULL)
        {
            fprintf(fi, "%d\n", existentes);
            for(i = 0; i < existentes; i++)
            {
                fprintf(fi, "%s\n", contactos[i].nome);
                fprintf(fi, "%s\n", contactos[i].telefone);
                fprintf(fi, "%s\n", contactos[i].email);
            }
            fclose(fi);
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
