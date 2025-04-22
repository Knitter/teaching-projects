/**
 * Ficha 6 - Leitura Formatada
 *
 * vogais.c
 *
 * Exercício 3 e), ler frase sem vogais
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
    char texto[200];

    printf("Introduza a frase: ");
    scanf("%[^aeiou]", texto);

    printf("\n\n\nFoi lido: %s\n\n\n", texto);
    return 0;
}
