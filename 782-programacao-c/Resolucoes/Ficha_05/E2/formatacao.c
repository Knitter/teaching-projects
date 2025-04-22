/**
 * Ficha 5 - Strings e Escrita Formatada
 *
 * formatacao.c
 *
 * Exercício 2, formatar os valores usando os
 * vários formatos
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
#include <stdlib.h>

int main()
{
    printf("< Programa de Formatação >\n\n\n");

    printf("Todas as cadas decimais: %f\n", 344545433.43);
    printf("Quatro casas decimais: %.4f\n", 344545433.43);
    printf("Duas cadas decimais: %.2f\n", 344545433.43);
    printf("Zero casas decimais: %.0f\n\n", 344545433.43);

    printf("Valor inteiro: %d\n", 434343545);
    printf("Todas as cadas decimais: %f\n", 656576763.4);
    printf("Duas casas deciamis, %.2f\n\n", 656576763.4);

    printf("Todas as cadas decimais: %f\n", 4545.6677887);
    printf("Duas casas deciamis, %.2f\n\n", 4545.6677887);

    printf("Texto: %s\n", "String a mostrar ao utilizador");
    printf("Texto: %s\n\n", "Uma segunda String");

    return 0;
}
