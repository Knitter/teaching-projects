/**
 * Ficha 6 - Leitura Formatada
 *
 * formatar_data.c
 *
 * Exercício 3 h), formatar data completa
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
    int dia, ano, hora, minuto;
    char mes[25];

    printf("Insira a data de nascimento completa: ");
    scanf("%d de %s de %d, %d:%d", &dia, mes, &ano, &hora, &minuto);

    printf("\n\n\nNascido no dia %d do mes de %s do ano de %d, as %d horas e %d minutos.\n\n\n", dia, mes, ano, hora, minuto);
    return 0;
}
