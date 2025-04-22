/**
* Ficha 3, exerc�cio 8
*
* main.c
*
* Copyright (C) 2010 S�rgio Lopes
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
    int i, soma = 0, numero, quantidade;
    char lixo;
    float media = 0.0;

    printf("Quantos n�meros vai introduzir: ");
    scanf("%d", &quantidade);

    //limpar o \n que est� em mem�ria
    while((lixo = getchar()) != '\n' && lixo != EOF);

    for(i = 0; i < quantidade; i++)
    {
        printf("\nIndique o n�mero: ");
        scanf("%d", &numero);

        //limpar o \n que est� em
        //mem�ria e afecta o ciclo
        while((lixo = getchar()) != '\n' && lixo != EOF);

        soma = soma + numero;
    }

    media = soma / quantidade;
    printf("\n\nM�dia: %.2f", media);

    return 0;
}
