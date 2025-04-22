/**
 * Agenda Electrónica
 *
 * App.java
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
package org.sergiolopes.formacao.agenda;

public class App {

    public static void main(String[] args) {
        Gestor gestor = new Gestor();

        Morada m = new Morada("Rua das Flores", "Lisboa", "2000");
        Empresa e = new Empresa("Sapo", "21999999", "", m,
                null, null, "www.sapo.pt", "");

        gestor.inserirEmpresa(e);

        m = new Morada("Rua Principal", "Lisboa", "2000");
        Pessoa p = new Pessoa("Antonio", "21999999", "", m,
                null, null, null);

        gestor.inserirPessoa(p);

    }
}
