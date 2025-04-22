/**
 * Ficha 1, IF... ELSE, exercício 7
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
    char nome[51];
    int estado_civil;
    float salario;

    printf("Indique o nome: ");
    scanf("%s", nome);

    printf("Indique o estado civil: ");
    scanf("%d", &estado_civil);

    printf("Indique o salário: ");
    scanf("%f", &salario);

    if(estado_civil == 0)
    {
        salario = salario - (salario * 0.05);
        printf("Novo salário: %.2f", salario);
    }
    else if(estado_civil == 1)
    {
        salario = salario - (salario * 0.1);
        printf("Novo salário: %.2f", salario);
    }
    else
    {
        printf("Estado civil inválido.");
    }

    return 0;
}
