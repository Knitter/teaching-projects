/**
 * Ficha 2 - Decis�o SWITCH
 *
 * main.c
 *
 * Exerc�cio 3.
 *
 * Ver tamb�m implementa��o alternativa.
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

int main()
{
    int mes;

    printf("Indique o m�s: ");
    scanf("%d", &mes);

    switch(mes)
    {
    case 1:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 2:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 3:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 4:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 5:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 6:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 7:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 8:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 9:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 10:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 11:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    case 12:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    default:
        printf("\n\nO indicado n�o � v�lido\n\n");
    }
    return 0;
}
