/**
 * Ficha 3 - IDE, Sintaxe da Linguagem
 *
 * dobro.c
 *
 * Exercício 3 a), cálculo do dobro de um número
 * inserido pelo utilizador.
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
    //declarar as variáveis necessárias
    int num_lido, dobro;

    printf("< Programa para Calcular o Dobro de um Numero >\n\n\n")

    printf("Insira o número para o qual pretende calcular o dobro: ");
    scanf("%d", &num_lido);

    dobro = num_lido * 2;

    printf("O dobro de %d é %d.\n", num_lido, dobro);

    return 0;
}
