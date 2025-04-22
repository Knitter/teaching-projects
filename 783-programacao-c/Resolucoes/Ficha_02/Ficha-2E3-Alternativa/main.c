/**
 * Ficha 2 - Decisão SWITCH
 *
 * main.c
 *
 * Exercício 3, alternativa.
 *
 * Validação de um mês usando o switch
 * com cases que não têm break
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
    int mes;

    printf("Indique o mês: ");
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
        printf("\n\nO indicado é válido\n\n");
        break;
    default:
        printf("\n\nO indicado não é válido\n\n");
    }
    return 0;
}
