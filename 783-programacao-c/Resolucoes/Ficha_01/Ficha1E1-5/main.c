/**
 * Ficha 1, IF, exerc�cio 5
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
    float salario;

    printf("Indique o sal�rio: ");
    scanf("%f", &salario);

    if(salario < 1500)
    {
        salario = salario + 100;
    }

    printf("\n\nNovo sal�rio: %.2f\n\n", salario);

    return 0;
}
