/**
 * Ficha 1, IF... ELSE, exercício 1
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
    int numero1, numero2;
    printf("Insira o primeiro número: ");
    scanf("%d", &numero1);
    printf("Insira o segundo número: ");
    scanf("%d", &numero2);

    if(numero1 > numero2)
    {
        printf("\n\nO primeiro número é maior.");
    }
    else
    {
        printf("\n\nO segundo número é maior.");
    }
    return 0;
}
