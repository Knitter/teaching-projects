/**
 * Ficha 2 - Pré-processador
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
#include <string.h>
#include <math.h>
#include <time.h>

#define IVA_6 0.06
#define IVA_16 0.16
#define IVA_21 0.21
#define RETENCAO 21.5
#define MESES 12
#define MAX_CARACTERES 251

int main()
{
    printf("Valor de IVA_6 %f\n", IVA_6);
    printf("Valor de IVA_16 %f\n", IVA_16);
    printf("Valor de IVA_21 %f\n", IVA_21);
    printf("Valor de RETENCAO %f\n", RETENCAO);
    printf("Valor de MESES %d", MESES);
    printf("Valor de MAX CARACTERES %d\n\n", MAX_CARACTERES);

    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);

    printf("%s\n", __FILE__);

#ifndef ER
#error Nao Foi Definida a macro ER...
#endif

    return 0;
}
