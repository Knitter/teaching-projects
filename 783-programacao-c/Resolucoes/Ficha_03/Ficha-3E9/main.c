/**
* Ficha 3, exercício 9
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
    int numero, i, soma = 0, multiplicacao = 1;
    char lixo;

    for(i = 0; i < 10; i++)
    {
        printf("Indique um número: ");

        //limpar o \n que está em
        //memória e afecta o ciclo
        while((lixo = getchar()) != '\n' && lixo != EOF);

        if(numero % 2 == 0)
        {
            soma = soma + numero;
        }
        else
        {
            multiplicacao = multiplicacao * numero;
        }

        printf("\n");
    }

    printf("\nSoma: %d, Multiplicacao: %d\n\n", soma, multiplicacao);
    return 0;
}
