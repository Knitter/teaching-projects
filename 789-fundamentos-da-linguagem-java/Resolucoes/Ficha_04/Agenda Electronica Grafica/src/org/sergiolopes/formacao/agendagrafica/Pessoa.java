/**
 * Agenda Electrónica Gráfica
 *
 * Pessoa.java
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

public class Pessoa extends Contacto {

    private String email;
    private String msn;

    public Pessoa(String nome, String telefone, String telemovel,
            Morada morada, Nota nota, String email, String msn) {

        super(nome, telefone, telemovel, morada, nota);

        this.email = email;
        this.msn = msn;
    }

    public Pessoa(String nome, String email, String msn) {
        super(nome);

        this.email = email;
        this.msn = msn;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getMsn() {
        return msn;
    }

    public void setMsn(String msn) {
        this.msn = msn;
    }
}
