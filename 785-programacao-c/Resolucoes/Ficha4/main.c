/**
 * Ficha 4 - Ficheiros de Binários
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

void eu(void);
void agregado(void);
void cincoPalavras(void);
void notas(void);
void percentagem(void);
void produto(void);

int main()
{
    char lixo, op;
    do
    {
        system("cls");
        printf("« Ficha 4 »\n\n\n");
        printf("a. Eu\n");
        printf("b. Agregado\n");
        printf("c. Cinco Palavras\n");
        printf("d. Notas\n");
        printf("e. Percentagem de Letras\n");
        printf("f. Produto\n");
        printf("g. Sair\n");
        printf("\n: ");

        scanf("%c", &op);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        switch(op)
        {
        case 'a':
            eu();
            break;
        case 'b':
            agregado();
            break;
        case 'c':
            cincoPalavras();
            break;
        case 'd':
            notas();
            break;
        case 'e':
            percentagem();
            break;
        case 'f':
            produto();
            break;
        }
    }
    while(op != 'g');

    return 0;
}

void produto(void)
{
    FILE *fi;
    int num1, num2, resultado;

    system("cls");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);

    resultado = num1 * num2;

    fi = fopen("produto.bin", "wb");
    if(fi != NULL)
    {
        fwrite(&resultado, sizeof(int), 1, fi);
        fclose(fi);
    }
}

void percentagem(void)
{
}

void notas(void)
{
}

void cincoPalavras(void)
{
    FILE *fi;
    char palavra[150], lixo;

    fi = fopen("cincopalavras.bin", "wb");
    if(fi != NULL)
    {
        system("cls");
        printf("Palavra 1: ");
        scanf("%s", palavra);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        fwrite(palavra, sizeof(char), strlen(palavra), fi);
        printf("Palavra 1: ");
        scanf("%s", palavra);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        fwrite(palavra, sizeof(char), strlen(palavra), fi);
        printf("Palavra 1: ");
        scanf("%s", palavra);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        fwrite(palavra, sizeof(char), strlen(palavra), fi);
        printf("Palavra 1: ");
        scanf("%s", palavra);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        fwrite(palavra, sizeof(char), strlen(palavra), fi);
        fclose(fi);
    }
}

void agregado(void)
{
    FILE *fi;
    char eu[] = "", pai[] = "",
                            mae[] = "", irma[] = "";

    fi = fopen("agregado.bin", "wb");
    if(fi != NULL)
    {
        fwrite(eu, sizeof(char), strlen(eu), fi);
        fwrite(pai, sizeof(char), strlen(pai), fi);
        fwrite(mae, sizeof(char), strlen(mae), fi);
        fwrite(irma, sizeof(char), strlen(irma), fi);
        fclose(fi);
    }
}

void eu(void)
{
    FILE *fi;
    char nome[] = "Sergio Lopes";

    fi = fopen("eu.bin", "wb");
    if(fi != NULL)
    {
        fwrite(nome, sizeof(char), strlen(nome), fi);
        fclose(fi);
    }
}
