/**
 * Ficha 1, IF... ELSE, exercício 10
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
    char opcao;

    printf("A - Data actual\n");
    printf("B - Hora actual\n");
    printf("S - Sair\n");
    printf("\n: ");

    scanf("%c", &opcao);
    if(opcao == 'a' || opcao == 'A')
    {
        printf("\nData de hoje é 14/10/2010\n\n");
    }
    else if(opcao == 'b' || opcao == 'B')
    {
        printf("\nHora actual é 12:20\n\n");
    }
    //não é necessário validar o 's' já que
    // o programa vai terminar de qualquer modo

    return 0;
}
