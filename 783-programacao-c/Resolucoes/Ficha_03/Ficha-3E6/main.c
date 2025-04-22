/**
 * Ficha 3, exercício 6
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
    int i, numero, secreto = 55;
    char lixo;

    for(i = 0; i < 5; i++)
    {
        printf("Adivinhe o número secreto: ");
        scanf("%d", &numero);

        //limpar o \n que está em
        //memória e afecta o ciclo
        while((lixo = getchar()) != '\n' && lixo != EOF);
        if(numero < secreto)
        {
            printf("O seu número é menor que o número secreto.\n");
        }
        else if(numero > secreto)
        {
            printf("O seu número é maior que o número secreto.\n");
        }
        else
        {
            printf("Acertou no número secreto.\n");
            //forçar o ciclo a terminar
            i = 5;
        }
    }

    return 0;
}
