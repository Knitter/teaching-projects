/**
 * Avaliação, exercício 3
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

int main()
{
    char nome[250], morada[1500], telefone[10];
    char ficheiro[250];
    FILE *fi;

    printf("Indique o nome do ficheiro: ");
    scanf("%s", ficheiro);

    fi = fopen(ficheiro, "w");
    if(fi != NULL)
    {
        printf("Insira o nome: ");
        scanf("%s", nome);
        printf("Insira a morada: ");
        scanf("%s", morada);
        printf("Insira o telefone: ");
        scanf("%s", telefone);

        fprintf(fi,"%s\n%s\n%s\n", nome, morada, telefone);
        printf("\n\nDados gravados.\n\n");
        fclose(fi);
    }
    else
    {
        printf("\n\nImpossivel abrir o ficheiro\n\n");
    }


    return 0;
}
