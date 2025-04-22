/**
 * Ficha 3 - IDE, Sintaxe da Linguagem
 *
 * area-rectangulo.c
 *
 * Exerc�cio 3 b), c�lculo da �rea de um rect�ngulo.
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
    float altura, largura, area;

    printf("< Programa para Calcular a �rea de um Rect�ngulo >\n\n\n");

    printf("Insira a Altura: ");
    scanf("%f", &altura);

    printf("Insira a Largura: ");
    scanf("%f", &largura);

    area = altura * largura;

    printf("\n\nA �rea de um Rect�ngulo de %.2f x %.2f � %.2f\n", altura, largura, area);
    return 0;
}
