/**
 * Ficha 1, IF... ELSE, exercício 8
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
 */#include <stdio.h>

int main()
{
    char letra;

    printf("Insira o estado civil: ");
    scanf("%c", &letra);

    if(letra == 's' || letra == 'S')
    {
        printf("Solteiro(a)\n");
    }
    else if(letra == 'c' || letra == 'C')
    {
        printf("Casado(a)\n");
    }
    else if(letra == 'd' || letra == 'D')
    {
        printf("Divorciado(a)\n");
    }
    else if(letra == 'v' || letra == 'V')
    {
        printf("Viúvo\n");
    }
    else
    {
        printf("Estado Civil Indefinido\n");
    }

    return 0;
}
