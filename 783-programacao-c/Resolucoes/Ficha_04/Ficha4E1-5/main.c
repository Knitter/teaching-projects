/**
 * Ficha 4, exerc�cio 1 - 5, while
 *
 * main.c
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
    int secreto = 57, tentativa, numTentativas = 0;

    printf("Tente acertar no n�mero secreto\n\n\n");
    while(numTentativas < 5)
    {
        printf("Tentativa %d: ", numTentativas + 1);
        scanf("%d", &tentativa);

        if(tentativa < secreto)
        {
            printf("N�mero muito pequeno.\n");
        }
        else if(tentativa > secreto)
        {
            printf("N�mero muito grande.\n");
        }
        else
        {
            printf("Acertou no n�mero.\n");
            numTentativas = 5;
        }
        numTentativas++;
    }
    return 0;
}
