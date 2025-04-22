/**
 * Ficha 6 - Leitura Formatada
 *
 * frase.c
 *
 * Exerc�cio 3 b), ler frase
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
    char lida[250];

    printf("Insira uma frase, maximo 250 caracteres.\n\n-> ");
    scanf("%[^\n]", lida);

    printf("\n\n\nFrase Lida: %s\n\n\n", lida);

    return 0;
}
