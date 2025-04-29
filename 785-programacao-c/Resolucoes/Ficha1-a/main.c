/**
 * Ficha 1 - Outros Sistemas Numéricos
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

struct mestrutura
{
    int ch:8;
};

int main()
{
    struct mestrutura final;
    char letra;

    printf("Insira uma letra: ");
    scanf("%c", &letra);

    final.ch = letra;

    return 0;
}
