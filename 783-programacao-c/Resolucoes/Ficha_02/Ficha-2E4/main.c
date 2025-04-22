/**
 * Ficha 2 - Decisão SWITCH
 *
 * main.c
 *
 * Exercício 4.
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
    char estado;

    printf("Indique o estado Civil: ");
    scanf("%c", &estado);

    switch(estado)
    {
    case 's':
    case 'S':
        printf("\n\nSolterio(a)\n\n");
        break;
    case 'c':
    case 'C':
        printf("\n\nCasado(a)\n\n");
        break;
    case 'v':
    case 'V':
        printf("\n\nViúvo(a)\n\n");
        break;
    case 'd':
    case 'D':
        printf("\n\nDivorciado(a)\n\n");
        break;
    default:
        printf("\n\nEstado Civil Indefinido\n\n");
        break;
    }
    return 0;
}
