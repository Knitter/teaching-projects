/**
* Ficha 3, exerc�cio 3
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

int main()
{
    int i, numero;
    printf("Indique o n�mero: ");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i++)
    {
        printf("\n%d x %d = %d", numero, i, numero * i);
    }
    printf("\n\n");

    return 0;
}
