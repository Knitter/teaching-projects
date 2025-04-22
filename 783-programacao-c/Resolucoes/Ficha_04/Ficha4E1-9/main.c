/**
 * Ficha 4, exercício 1 - 9, while
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
    int iteracoes = 0;
    char letra = '\0', lixo;

    while(letra != 's' && iteracoes < 20)
    {

        printf("Indique a letra: ");
        scanf("%c", &letra);
        while((lixo = getchar()) != '\n' && lixo != EOF);

        switch(letra)
        {
        case 'a':
        case 'A':
            printf("Olá mundo!\n");
            break;
        case 'p':
        case 'P':
            printf("Vote PCP!\n");
            break;
        case 'v':
        case 'V':
            printf("Vitória, a águia…\n");
            break;
        }
    }

    return 0;
}
