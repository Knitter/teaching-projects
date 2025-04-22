/**
 * Ficha 2 - Decisão SWITCH
 *
 * main.c
 *
 * Exercício 2.
 *
 * Ver também implementação alternativa.
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

    switch(mes)
    {
    case 1:
        printf("\n\nO mês indicado tem 31 dias\n\n");
        break;
    case 2:
        printf("\n\nO mês indicado tem 28 dias em anos tradicionais e 29 em anos bisextos\n");
        break;
    case 3:
        printf("\n\nO mês indicado tem 31 dias\n\n");
        break;
    case 4:
        printf("\n\nO mês indicado tem 30 dias\n\n");
        break;
    case 5:
        printf("\n\nO mês indicado tem 31 dias\n\n");
        break;
    case 6:
        printf("\n\nO mês indicado tem 30 dias\n\n");
        break;
    case 7:
        printf("\n\nO mês indicado tem 31 dias\n\n");
        break;
    case 8:
        printf("\n\nO mês indicado tem 31 dias\n\n");
        break;
    case 9:
        printf("\n\nO mês indicado tem 30 dias\n\n");
        break;
    case 10:
        printf("\n\nO mês indicado tem 31 dias\n\n");
        break;
    case 11:
        printf("\n\nO mês indicado tem 30 dias\n\n");
        break;
    case 12:
        printf("\n\nO mês indicado tem 31 dias\n\n");
        break;
    }
    return 0;
}
