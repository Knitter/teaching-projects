/**
 * Ficha 2 - Decis�o SWITCH
 *
 * main.c
 *
 * Exerc�cio 3, alternativa.
 *
 * Valida��o de um m�s usando o switch
 * com cases que n�o t�m break
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
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        printf("\n\nO indicado � v�lido\n\n");
        break;
    default:
        printf("\n\nO indicado n�o � v�lido\n\n");
    }
    return 0;
}
