/**
 * Ficha 1, IF... ELSE, exercício 12
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
    float graus;
    printf("Indique os graus em Kelvin: ");
    scanf("%f", &graus);
    graus = graus + 272;

    if(graus < 0)
    {
        printf("Gelado!\n");
    }
    else if(graus >= 0 && graus < 18)
    {
        printf("Frio!\n");
    }
    else if(graus >= 18 && graus < 25)
    {
        printf("Ameno!\n");
    }
    else
    {
        printf("Calor!\n");
    }

    return 0;
}
