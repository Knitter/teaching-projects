/**
 * Ficha 4, exerc�cio 1 - 3, while
 *
 * main.c
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
    int numero, i = 1;
    printf("Insira o n�mero a usar: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d\n\n", numero);
    while(i <= 10)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i = i + 1;
    }
    return 0;
}
