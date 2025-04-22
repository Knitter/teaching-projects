/**
* Ficha 3, exercício 10
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
    int i;
    char letra, lixo;

    for(i = 0; i < 20; i++)
    {
        printf("Indique a letra: ");
        scanf("%c", &letra);
        //limpar o \n que está em
        //memória e afecta o ciclo
        while((lixo = getchar()) != '\n' && lixo != EOF);

        switch(letra)
        {
        case 'A':
        case 'a':

            printf("Olá Mundo!\n");
            break;
        case 'p':
        case 'P':
            printf("Vote PCP!\n");
            break;
        case 'v':
        case 'V':
            printf("Vitória, a águia…\n");
            break;
        }
        printf("\n");
    }

    return 0;
}
