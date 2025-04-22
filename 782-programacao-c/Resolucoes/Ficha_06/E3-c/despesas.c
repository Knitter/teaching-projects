/**
 * Ficha 6 - Leitura Formatada
 *
 * despesas.c
 *
 * Exercício 3 c), registar despesas para os 12 meses
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
    double janeiro, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro;
    double media = 0.0;

    janeiro = fevereiro = marco = abril = maio = junho = julho = agosto = setembro = outubro = novembro = dezembro = 0.0;

    printf("Insira as depesas dos 12 meses, separadas por espaços.\n\n-> ");
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &janeiro, &fevereiro, &marco, &abril,
          &maio, &junho, &julho, &agosto, &setembro, &outubro, &novembro, &dezembro);

    media = (janeiro + fevereiro + marco + abril + maio + junho + julho + agosto + setembro +
             outubro + novembro + dezembro) / 12;

    printf("\n\nMedia de despesas: %.3f\n\n\n", media);

    return 0;
}
