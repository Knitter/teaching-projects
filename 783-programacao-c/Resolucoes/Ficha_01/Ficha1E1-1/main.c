/**
 * Ficha 1, IF, exercício 1
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
    int x, y;

    printf("Insira o primeiro número: ");
    scanf("%d", &x);
    printf("Insira o segundo número: ");
    scanf("%d", &y);

    printf("\n+ Aplicação de Operadores +\n\n");

    printf("Operador Igual, == : %d\n", x == y);
    printf("Operador Diferente, != : %d\n", x != y);
    printf("Operador Maior, > : %d\n", x > y);
    printf("Operador Maior ou Igual, >= : %d\n", x >= y);
    printf("Operador Menor ou Igual, <= : %d\n", x <= y);
    printf("Operador Menor (<): %d", x < y);

    return 0;
}
