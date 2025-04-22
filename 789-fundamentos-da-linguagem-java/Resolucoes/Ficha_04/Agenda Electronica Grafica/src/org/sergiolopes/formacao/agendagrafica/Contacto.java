/**
 * Agenda Electrónica Gráfica
 *
 * Contacto.java
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

public class Contacto {

    private String nome;
    private String telefone;
    private String telemovel;
    private Morada morada;
    private Nota nota;

    public Contacto(
            String nome) {
        this.nome = nome;
    }

    public Contacto(String nome, String telefone, String telemovel,
            Morada morada, Nota nota) {

        this.nome = nome;
        this.telefone = telefone;
        this.telemovel = telemovel;
        this.morada = morada;
        this.nota = nota;
    }

    public Morada getMorada() {
        return morada;
    }

    public void setMorada(Morada morada) {
        this.morada = morada;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Nota getNota() {
        return nota;
    }

    public void setNota(Nota nota) {
        this.nota = nota;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getTelemovel() {
        return telemovel;
    }

    public void setTelemovel(String telemovel) {
        this.telemovel = telemovel;
    }
}
