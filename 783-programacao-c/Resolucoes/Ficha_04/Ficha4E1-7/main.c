/**
 * Ficha 4, exercício 1 - 7, while
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
    char lixo;
    int numeros, i = 0;
    float soma = 0, numero;
    printf("Indique quantos números devem ser lidos: ");
    scanf("%d", &numeros);
    while(i < numeros)
    {
        printf("Indique um número: ");
        scanf("%f", &numero);
        while((lixo = getchar()) != '\n' && lixo != EOF);

        soma = soma + numero;

        i = i + 1;
    }
    printf("\nMédia encontrada: %f", soma / numeros);
    return 0;
}
