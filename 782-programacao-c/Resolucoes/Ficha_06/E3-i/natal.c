/**
 * Ficha 6 - Leitura Formatada
 *
 * natal.c
 *
 * Exerc�cio 3 i), segundos para o natal
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
#include <stdlib.h>

int main()
{
    int semanas;
    long segundos;

    printf("Insira o n�mero de semanas: ");
    scanf("%d", &semanas);

    segundos = semanas * 7 * 24 * 60 * 60;
    printf("\nN�mero de segundos at� ao Natal �: %ld\n\n", segundos);

    return 0;
}
