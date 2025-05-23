/**
 * Agenda Electr�nica
 *
 * estruturas.h
 *
 * Programa que permite simular uma agenda electr�nica com
 * grava��o de dados.
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
#ifndef _ESTRUTURAS_H_
#define _ESTRUTURAS_H_

#define MAX_NOME 251
#define MAX_TELEFONE 10
#define MAX_EMAIL 251

struct contacto
{
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];
    char email[MAX_EMAIL];
};

struct contacto inserirContacto(void);
void imprimirContacto(struct contacto *c);

#endif
