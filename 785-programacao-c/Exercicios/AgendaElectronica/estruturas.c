/**
 * Agenda Electrónica
 *
 * estruturas.c
 *
 * Programa que permite simular uma agenda electrónica com
 * gravação de dados.
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
#include "estruturas.h"

void imprimirContacto(struct contacto *c)
{
    printf("Nome: %s\n", c->nome);
    printf("Telefone: %s\n", c->telefone);
    printf("E-mail: %s\n", c->email);
}

struct contacto inserirContacto(void)
{
    struct contacto novo;

    printf("Nome: ");
    lerString(novo.nome);
    printf("Telefone: ");
    lerString(novo.telefone);
    printf("E-mail: ");
    lerString(novo.email);

    return novo;
}
