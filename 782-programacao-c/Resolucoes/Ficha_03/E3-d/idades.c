/**
 * Ficha 3 - IDE, Sintaxe da Linguagem
 *
 * idades.c
 *
 * Exercício 3 d), converter a idade de um pessoa
 * para dias.
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
    int anos, meses, dias, idade_final;

    printf("< Programa para Converter uma Idade para Dias >\n\n\n");

    printf("Indique os anos: ");
    scanf("%d", &anos);

    printf("Indique os meses: ");
    scanf("%d", &meses);

    printf("Indique os dias: ");
    scanf("%d", &dias);

    idade_final = (anos * 365) + (meses * 30) + dias;

    printf("\n\nIdade Convertida: %d dias\n\n", idade_final);

    return 0;
}
