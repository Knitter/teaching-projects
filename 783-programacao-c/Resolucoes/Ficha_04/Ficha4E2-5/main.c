/**
 * Ficha 4, exercício 2 - 5, do... while
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
    char lixo;
    float soma1 = 0.0, soma2 = 0.0, salario;
    do
    {
        printf("Indique o salário a registar: ");
        scanf("%f", &salario);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        if(salario > 0)
        {

            if(salario < 1000)
            {
                soma1 = soma1 + salario;
            }
            else
            {
                soma2 = soma2 + salario;
            }
        }
    }
    while(salario != 0);

    printf("\nSomatório de salários inferioes a 1000 euros: %f\n", soma1);
    printf("Somatório de salários superiores a 1000 euros: %f\n", soma2);
    return 0;
}
