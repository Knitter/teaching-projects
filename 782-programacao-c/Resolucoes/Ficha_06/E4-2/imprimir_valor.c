/**
 * Ficha 6 - Leitura Formatada
 *
 * imprimir_valor.c
 *
 * Exercício 4 2), mostrar valor de variável
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
#include <stdlib.h>

int main()
{
    int var = 500;
    char letra = 'G';
    float com_decimas = 6.7;

    printf("Valor da variável inteira: %d\n", var);
    printf("Valor da variável char: %c\n", letra);
    printf("Valor da variável de vírgula flutuante: %.3f\n", com_decimas);

    return 0;
}
