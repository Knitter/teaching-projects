/**
 * Ficha 3, exercício 1
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

int main()
{
    char letra;

    printf("Indique a letra: ");
    scanf("%c", &letra);

    switch(letra)
    {
    case 'r':
    case 'R':
        printf("Vermelho!\n\n");
        break;
    case 'g':
    case 'G':
        printf("Verde!\n\n");
        break;
    case 'b':
    case 'B':
        printf("Azul!\n\n");
        break;
    }

    return 0;
}
