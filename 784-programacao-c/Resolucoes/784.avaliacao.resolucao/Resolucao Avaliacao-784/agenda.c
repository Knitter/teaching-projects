#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct pessoa
{
    char nome[251];
    char morada[201];
    char telefone[10];
    char email[201];
};

struct livro
{
    char titulo[151];
    char autor[251];
    char isbn[14];
    int paginas;
};

char lerCaracter(void);
float lerNumeroReal(void);
int lerNumeroInteiro(void);
void lerString(char *s);
int vogal(char letra);
int consoante(char letra);
int digito(char letra);
void imprimirContacto(struct pessoa *c);
void imprimirLivro(struct livro *p);
//
struct pessoa lerPessoa(void);
struct livro lerLivro(void);
void estatisticasTexto(int *digitos, int *consoantes, int *vogais);
void inversor(char *frase);
int potencia(int base, int n);

int main()
{
    char opcao = '\0', frase[2500];
    int numContactos = 0, numLivros = 0, i, digitos = 0, consoantes = 0, vogais = 0, base, exp;
    struct pessoa contactos[15];
    struct livro livros[15];

    do
    {
        system("cls");
        printf("<< A Minha Agenda >>\n\n\n");
        printf("1 - Contactos\n");
        printf("2 - Livros\n");
        printf("3 - Acessorios\n");
        printf("4 - Sair\n");
        printf("\n: ");
        opcao = lerCaracter();
        switch(opcao)
        {
        case '1':
            do
            {
                system("cls");
                printf("<< Gestao de Contactos >>\n\n\n");
                printf("1 - Inserir Contacto\n");
                printf("2 - Listar Contactos\n");
                printf("3 - Voltar\n");
                printf("\n: ");
                opcao = lerCaracter();
                switch(opcao)
                {
                case '1':
                    system("cls");
                    printf("+ Dados de Contacto +\n\n\n");
                    contactos[numContactos++] = lerPessoa();

                    printf("\nDados da pessoa registados.\n\n");
                    system("pause");
                    break;
                case '2':
                    system("cls");
                    printf("+ Contactos Registados +\n\n\n");
                    for(i = 0; i < numContactos; i++)
                    {
                        imprimirContacto(&contactos[i]);
                        printf("\n");
                    }
                    printf("\n");
                    system("pause");
                    break;
                }
            }
            while(opcao != '3');
            opcao = '\0';
            break;
        case '2':
            do
            {
                system("cls");
                printf("<< Livros de Interesse >>\n\n\n");
                printf("1 - Inserir Livro\n");
                printf("2 - Listar Livros\n");
                printf("3 - Voltar\n");
                printf("\n: ");
                opcao = lerCaracter();
                switch(opcao)
                {
                case '1':
                    system("cls");
                    printf("+ Dados de Livros +\n\n\n");
                    livros[numLivros++] = lerLivro();

                    printf("\nDados do livro registados.\n\n");
                    system("pause");
                    break;
                case '2':
                    system("cls");
                    printf("+ Livros Registados +\n\n\n");
                    for(i = 0; i < numLivros; i++)
                    {
                        imprimirLivro(&livros[i]);
                        printf("\n");
                    }
                    printf("\n");
                    system("pause");
                    break;
                }
            }
            while(opcao != '3');
            opcao = '\0';
            break;
        case '3':
            do
            {
                system("cls");
                printf("<< Acessorios >>\n\n\n");
                printf("1 - Estatisticas de Texto\n");
                printf("2 - Inversor de Texto\n");
                printf("3 - Pontencias\n");
                printf("4 - Voltar\n");
                printf("\n: ");
                opcao = lerCaracter();
                switch(opcao)
                {
                case '1':
                    system("cls");
                    printf("+ Estatisticas de Texto +\n\n\n");
                    estatisticasTexto(&digitos, &consoantes, &vogais);
                    printf("\nForam introduzidos %d digitos, %d consoantes e %d vogais.\n\n", digitos, consoantes, vogais);
                    system("pause");
                    break;
                case '2':
                    system("cls");
                    printf("+ Inversor de Texto +\n\n\n");
                    printf("Frase a inverter: ");
                    lerString(frase);
                    inversor(frase);

                    printf("\n\nNova frase: %s\n\n", frase);
                    system("pause");
                    break;
                case '3':
                    system("cls");
                    printf("+ Pontencias +\n\n\n");
                    printf("Base: ");
                    base = lerNumeroInteiro();
                    printf("Expoente: ");
                    exp = lerNumeroInteiro();

                    printf("\n%d^%d = %d\n\n", base, exp, potencia(base, exp));
                    system("pause");
                    break;
                }
            }
            while(opcao != '4');
            opcao = '\0';
            break;
        }
    }
    while(opcao != '4');

    return 0;
}
int potencia(int base, int n)
{
    int p = 1, i;

    for(i = 0; i < n; i++)
    {
        p *= base;
    }

    return p;
}

void inversor(char *frase)
{
    int i, k, max = strlen(frase);
    char copia[max + 1];

    for(i = 0; i < max; i++)
    {
        copia[i] = frase[i];
    }
    copia[i] = '\0';

    for(i = 0, k = max - 1; i < max; i++, k--)
    {
        frase[i] = copia[k];
    }
}

void estatisticasTexto(int *digitos, int *consoantes, int *vogais)
{
    char texto[2500];
    int max, i;

    printf("Texto: ");
    lerString(texto);

    max = strlen(texto);
    for(i = 0; i < max; i++)
    {
        if(digito(texto[i]) == 1)
        {
            (*digitos)++;
        }
        else if(consoante(texto[i]) == 1)
        {
            (*consoantes)++;
        }
        else if(vogal(texto[i]) == 1)
        {
            (*vogais)++;
        }
    }
}

struct livro lerLivro(void)
{
    struct livro l;

    printf("Titulo: ");
    lerString(l.titulo);
    printf("Autor: ");
    lerString(l.autor);
    printf("ISBN: ");
    lerString(l.isbn);
    printf("Paginas: ");
    l.paginas = lerNumeroInteiro();

    return l;
}

struct pessoa lerPessoa(void)
{
    struct pessoa p;

    printf("Nome: ");
    lerString(p.nome);
    printf("Morada: ");
    lerString(p.morada);
    printf("Telefone: ");
    lerString(p.telefone);
    printf("E-mail: ");
    lerString(p.email);

    return p;
}

/** **/
void imprimirLivro(struct livro *p)
{
    printf("Titulo: %s\n", p->titulo);
    printf("Autor: %s\n", p->autor);
    printf("ISBN: %s\n", p->isbn);
    printf("%d Paginas.\n", p->paginas);
}

void imprimirContacto(struct pessoa *c)
{
    printf("Nome: %s\n", c->nome);
    printf("Morada: %s\n", c->morada);
    printf("Telefone: %s\n", c->telefone);
    printf("E-mail: %s\n", c->email);
}

int digito(char letra)
{
    if(letra >= '0' && letra <= '9')
    {
        return 1;
    }
    return 0;
}

int consoante(char letra)
{
    if(strchr("bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ", letra))
    {
        return 1;
    }

    return 0;
}

int vogal(char letra)
{
    if(strchr("aeiouAEIOU", letra))
    {
        return 1;
    }

    return 0;
}

void lerString(char *s)
{
    char lixo;

    scanf("%[^\n]", s);
    while((lixo = getchar()) != '\n' && lixo != EOF);
}

int lerNumeroInteiro(void)
{
    int x;
    char lixo;

    scanf("%d", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}

float lerNumeroReal(void)
{
    float x;
    char lixo;

    scanf("%f", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}

char lerCaracter(void)
{
    char lixo, x;

    scanf("%c", &x);
    while((lixo = getchar()) != '\n' && lixo != EOF);

    return x;
}
