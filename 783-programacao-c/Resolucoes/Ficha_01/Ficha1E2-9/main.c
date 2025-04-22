/**
 * Ficha 1, IF... ELSE, exercício 9
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
    float nota;

    printf("Insira a nota: ");
    scanf("%f", &nota);

    if(nota < 0 || nota > 20)
    {
        printf("Nota inválida.\a\n");
    }
    else if(nota < 9.5)
    {
        printf("Insuficiente\n");
    }
    else if(nota >= 9.5 && nota < 14)
    {
        printf("suficiente\n");
    }
    else if(nota >= 14 && nota < 17 )
    {
        printf("Bom\n");
    }
    else if(nota >= 17 && nota < 19.5)
    {
        printf("Muito Bom\n");
    }
    else if(nota >= 19.5)
    {
        printf("Excelente\n");
    }

    return 0;
}
