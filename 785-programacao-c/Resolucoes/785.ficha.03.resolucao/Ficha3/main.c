/**
 * Ficha 3 - Ficheiros de Texto
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

void abrirEmW(void);
void abrirEmTodosModos(void);
void abrirComConfirmacao(void);
void registarNome(void);
void registarAgregado(void);
void cincoPalavras(void);
void dadosAluno(void);
void estatisticas(void);
void concatenar(void);
void produto(void);

int main()
{
    char lixo, op;
    do
    {
        system("cls");
        printf("Exercicios Com Ficheiros\n\n\n");
        printf("a) Abrir em Modo W\n");
        printf("b) Todos os Modos\n");
        printf("c) Abrir com Confirmacao\n");
        printf("d) Registar Nome\n");
        printf("e) Registar Agregado\n");
        printf("f) Cinco Palavras\n");
        printf("g) Dados Aluno\n");
        printf("h) Percentagem de Letras\n");
        printf("i) Juntar Ficheiros\n");
        printf("j) Produto\n");
        printf("k) Sair\n");
        printf("\n: ");
        scanf("%c", &op);
        while((lixo = getchar()) != '\n' && lixo != EOF);
        switch(op)
        {
        case 'a':
            abrirEmW();
            break;
        case 'b':
            abrirEmTodosModos();
            break;
        case 'c':
            abrirComConfirmacao();
            break;
        case 'd':
            registarNome();
            break;
        case 'e':
            registarAgregado();
            break;
        case 'f':
            cincoPalavras();
            break;
        case 'g':
            dadosAluno();
            break;
        case 'h':
            estatisticas();
            break;
        case 'i':
            concatenar();
            break;
        case 'j':
            produto();
            break;
        }

    }//Terminar o DO
    while(op != 'k');

    return 0;
}

//ZONA DE IMPLEMENTAÇÃO
void produto(void)
{
    FILE *fi;
    int num1, num2;
    char lixo;

    fi = fopen("resultados.txt", "w");
    if(fi != NULL)
    {
        do
        {
            system("cls");
            printf("Produto de dois Números\n\n\n");
            printf("Número 1: ");
            scanf("%d", &num1);
            printf("Número 2: ");
            scanf("%d", &num2);

            fprintf(fi, "%d x %d = %d\n", num1, num2, num1 * num2);

            while((lixo = getchar()) != '\n' && lixo != EOF);
        }
        while(num1 != 0 && num2 != 0);
        fclose(fi);
    }
    else
    {
        printf("Nao foi possivel abrir o ficheiro.\n");
        system("pause");
    }
}

void concatenar(void)
{
    FILE *origem, *destino;
    char linha[1500];

    destino = fopen("destino.txt", "w");
    if(destino != NULL)
    {
        origem = fopen("original.txt", "r");
        if(origem != NULL)
        {
            while(!feof(origem))
            {
                fscanf(origem, "\n%[^\n]", linha);
                fprintf(destino, "%s\n", linha);
            }
            fclose(origem);
        }
        fflush(destino);

        origem = fopen("original2.txt", "r");
        if(origem != NULL)
        {
            while(!feof(origem))
            {
                fscanf(origem, "\n%[^\n]", linha);
                fprintf(destino, "%s\n", linha);
            }
            fclose(origem);
        }
        fclose(destino);
    }
}

void estatisticas(void)
{
    FILE *fp;
    char linha[1500];
    int max, i, numA = 0, numC = 0,
                                 numD = 0, numSp = 0;

    fp = fopen("original.txt", "r");
    if(fp != NULL)
    {
        while(!feof(fp))
        {
            fscanf(fp, "\n%[^\n]", linha);
            max = strlen(linha);
            for(i = 0; i < max; i++)
            {
                if(linha[i] == 'a' ||
                        linha[i] == 'A')
                {
                    numA++;
                }
                else if(linha[i] == 'c' ||
                        linha[i] == 'C')
                {
                    numC++;
                }
                else if(linha[i] == 'd' ||
                        linha[i] == 'D')
                {
                    numD++;
                }
                else if(linha[i] == ' ')
                {
                    numSp++;
                }
            }
        }
        fclose(fp);
    }

    fp = fopen("luises.txt", "w");
    if(fp != NULL)
    {
        fprintf(fp,"Estatisticas\n\n\n");
        fprintf(fp, "Número de 'A': %d\n", numA);
        fprintf(fp, "Número de 'C': %d\n", numC);
        fprintf(fp, "Número de 'D': %d\n", numD);
        fprintf(fp, "Número de Espaços: %d\n", numSp);
        fclose(fp);
    }

}

void dadosAluno(void)
{
    char nome[250];
    int i;
    float notas[10], soma = 0.0, media;
    FILE *fp;

    system("cls");
    printf("Nome: ");
    scanf("%s", nome);

    for(i = 0; i < 10; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma / 10;

    fp = fopen("notas.txt", "w");
    if(fp != NULL)
    {
        fprintf(fp, "Aluno: %s\n", nome);
        fprintf(fp, "Média: %.2f\n", media);
        fprintf(fp, "Notas: ");
        for(i = 0; i < 10; i++)
        {
            fprintf(fp, "%.2f ", notas[i]);
        }
        fclose(fp);
    }
}

void cincoPalavras(void)
{
    FILE *f;
    char palavra[251];

    f = fopen("palavras.txt", "w");

    system("cls");
    printf("Indique a P1: ");
    scanf("%s", palavra);
    fprintf(f, "P1: %s\n", palavra);
    printf("Indique a P2: ");
    scanf("%s", palavra);
    fprintf(f, "P2: %s\n", palavra);
    printf("Indique a P3: ");
    scanf("%s", palavra);
    fprintf(f, "P3: %s\n", palavra);
    printf("Indique a P4: ");
    scanf("%s", palavra);
    fprintf(f, "P4: %s\n", palavra);
    printf("Indique a P5: ");
    scanf("%s", palavra);
    fprintf(f, "P5: %s\n", palavra);

    fclose(f);
}

void registarAgregado(void)
{
    FILE *f;
    char eu[] = "SERGIO LOPES", pai[] = "JOAO LOPES",
                                        mae[] = "CRISTINA LOPES", irma[] = "TANIA LOPES";

    f = fopen("agregado.txt", "w");
    if(f != NULL)
    {
        fprintf(f, "Eu: %s\n", eu);
        fprintf(f, "Pai: %s\n", pai);
        fprintf(f, "Mae: %s\nIrma: %s", mae, irma);
        fclose(f);

        system("cls");
        printf("Dados gravados com sucesso.\n\n\n");
        system("pause");
    }
}

void registarNome(void)
{
    FILE *f;
    char nome[] = "SERGIO LOPES";

    f = fopen("teste.txt", "w");
    if(f != NULL)
    {
        fprintf(f, "%s\n", nome);
        fclose(f);
    }
}

void abrirComConfirmacao(void)
{
    FILE *f;

    f = fopen("teste.txt", "r");
    if(f != NULL)
    {
        printf("Ficheiro Aberto!");
        fclose(f);
    }
    else
    {
        printf("Erro ao abrir o Ficheiro...");
    }
}

void abrirEmTodosModos(void)
{
    FILE *f;
    f = fopen("teste.txt", "r");
    fclose(f);
    f = fopen("teste.txt", "w");
    fclose(f);
    f = fopen("teste.txt", "a");
    fclose(f);

    f = fopen("teste.txt", "r+");
    fclose(f);
    f = fopen("teste.txt", "w+");
    fclose(f);
    f = fopen("teste.txt", "a+");
    fclose(f);
}

void abrirEmW(void)
{
    FILE *f;

    //abrir
    f = fopen("teste.txt", "w");

    //fechar
    fclose(f);
}

