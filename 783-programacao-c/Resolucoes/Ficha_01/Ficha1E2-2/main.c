/**
 * Ficha 1, IF... ELSE, exercício 2
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
    int mes;

    printf("Indique o mês: ");
    scanf("%d", &mes);

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7
            || mes == 8 || mes == 10 || mes == 12)
    {
        printf("\n\nO mês indicado tem 31 dias.\n\n");
    }
    else if(mes == 4 || mes == 6 || mes == 9 ||
            mes == 11)
    {
        printf("\n\nO mês indicado tem 30 dias.\n\n");
    }
    else
    {
        printf("\n\nO mês indicado tem 28 dias em anos comuns e 29 em anos bisextos.\n\n");
    }

    return 0;
}
