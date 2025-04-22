/**
* Ficha 3, exercício 5
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
    int i, soma = 0, numero;
    char lixo;

    for(; soma < 500;)
    {
        printf("Indique um número: ");
        scanf("%d", &numero);

        //limpar o \n que está em
        //memória e afecta o ciclo
        while((lixo = getchar()) != '\n' && lixo != EOF);

        soma = soma + numero;
    }

    printf("A soma encontrada é %d", soma);

    return 0;
}
