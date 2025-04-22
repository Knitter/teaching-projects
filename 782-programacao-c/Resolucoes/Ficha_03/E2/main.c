/**
 * Ficha 3 - IDE, Sintaxe da Linguagem
 *
 * main.c
 *
 * Conversor monetário para escudos e euros.
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

#define TAXA_CONVERSAO 200.482

int main()
{
    float valor;
    char opcao;

    printf("Valor em (E)uros ou E(s)cudos? ");
    scanf("%c", &opcao);

    printf("\nInsira o valor a converter: ");
    scanf("%f", &valor);

    if(opcao == 'e' || opcao == 'E')
    {
        printf("Conversão para Escudos: %.2f", valor * TAXA_CONVERSAO);
    }
    else if(opcao == 's' || opcao == 'S')
    {
        printf("Conversão para Euros: %.2f", (valor == 0 ? 0 : valor / TAXA_CONVERSAO));
    }

    printf("\n\n");

    return 0;
}
