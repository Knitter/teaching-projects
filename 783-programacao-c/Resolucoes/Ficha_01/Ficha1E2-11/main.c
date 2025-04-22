/**
 * Ficha 1, IF... ELSE, exercício 11
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
    int idade;

    printf("Indique a idade: ");
    scanf("%d", &idade);

    if(idade < 0)
    {
        printf("A idade não pode ser negativa!\n");
    }
    else if(idade < 13)
    {
        printf("Júnior.\n");
    }
    else if(idade >= 13 && idade < 18 )
    {
        printf("Jovem.\n");
    }
    else if(idade >= 18 && idade < 65 )
    {
        printf("Adulto.\n");
    }
    else
    {
        printf("Sénior.\n");
    }

    return 0;
}
