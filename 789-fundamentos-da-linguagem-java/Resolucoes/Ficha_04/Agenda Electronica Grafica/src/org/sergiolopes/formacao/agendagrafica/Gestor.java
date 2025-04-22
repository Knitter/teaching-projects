/**
 * Agenda Electrónica Gráfica
 *
 * Gestor.java
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
package org.sergiolopes.formacao.agendagrafica;

import java.util.ArrayList;

public class Gestor {

    private ArrayList<Empresa> empresas;
    private ArrayList<Pessoa> pessoas;

    public Gestor() {
        empresas = new ArrayList<Empresa>();
        pessoas = new ArrayList<Pessoa>();
    }

    public void inserirEmpresa(Empresa emp) {
        empresas.add(emp);
    }

    public void removerEmpresa(Empresa emp) {
        empresas.remove(emp);
    }

    public ArrayList<Empresa> pesquisarEmpresaPorNome(String nome) {
        ArrayList<Empresa> encontradas = new ArrayList<Empresa>();
        for (Empresa e : empresas) {
            if (e.getNome().equalsIgnoreCase(nome)) {
                encontradas.add(e);
            }
        }

        return encontradas;
    }

    public ArrayList<Empresa> obterTodasEmpresas() {
        return new ArrayList<Empresa>(empresas);
    }

    public void inserirPessoa(Pessoa p) {
        pessoas.add(p);
    }

    public void removerPessoa(Pessoa p) {
        pessoas.remove(p);
    }

    public ArrayList<Pessoa> pesquisarPessoaPorNome(String nome) {
        ArrayList<Pessoa> encontradas = new ArrayList<Pessoa>();

        for (Pessoa p : pessoas) {
            if (p.getNome().contains(nome)) {
                encontradas.add(p);
            }
        }

        return encontradas;
    }

    public ArrayList<Pessoa> obterTodasPessoas() {
        return new ArrayList<Pessoa>(pessoas);
    }
}
