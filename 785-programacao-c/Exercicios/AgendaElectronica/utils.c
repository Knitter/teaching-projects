/**
 * Agenda Electrónica
 *
 * utils.c
 *
 * Programa que permite simular uma agenda electrónica com
 * gravação de dados.
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
#include "utils.h"

void lerString(char *texto)
{
    char lixo;

    scanf("%[^\n]", texto);
    while( (lixo = getchar()) != '\n' && lixo != EOF );
}

int lerInteiro(void)
{
    char lixo;
    int numero;

    scanf("%d", &numero);
    while( (lixo = getchar()) != '\n' &&
            lixo != EOF );

    return numero;
}

char lerCaracter(void)
{
    char lixo, caracter;

    scanf("%c", &caracter);
    while( (lixo = getchar()) != '\n' &&
            lixo != EOF );

    return caracter;
}
