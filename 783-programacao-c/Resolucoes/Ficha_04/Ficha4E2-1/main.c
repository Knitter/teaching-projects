/**
 * Ficha 4, exercício 2 - , do... while
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
#include <stdlib.h>

int main()
{
    char lixo, nome[100], continuar = '\0';
    float salario;
    int estadoCivil;
    do
    {
        printf("Indique o nome: ");
        scanf("%[^\n]", nome);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        printf("Indique o Estado Civil (1 - casado, 0 - solteiro): ");
        scanf("%d", &estadoCivil);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        printf("Salário: ");
        scanf("%f", &salario);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        if(estadoCivil == 1)
        {
            salario = salario - (salario * 0.05);
            printf("\nNovo salário: %f\n", salario);
        }
        else if(estadoCivil == 0)
        {
            salario = salario - (salario * 0.10);
            printf("\nNovo salário: %f\n", salario);
        }

        printf("Enter para continuar, # para terminar");
        scanf("%c", &continuar);
        while((lixo = getchar()) != '\n' && lixo != EOF);
    }
    while(continuar != '#');

    return 0;
}
