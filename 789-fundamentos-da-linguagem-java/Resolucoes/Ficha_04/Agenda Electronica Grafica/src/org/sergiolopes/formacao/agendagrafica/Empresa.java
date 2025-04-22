/**
 * Agenda Electrónica Gráfica
 *
 * Empresa.java
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

public class Empresa extends Contacto {

    private Pessoa responsavel;
    private String website;
    private String fax;

    public Empresa(String nome, String telefone,
            String telemovel, Morada morada, Nota nota,
            Pessoa responsavel, String website,
            String fax) {

        super(nome, telefone, telemovel, morada, nota);

        this.responsavel = responsavel;
        this.website = website;
        this.fax = fax;
    }

    public Empresa(String nome, Pessoa responsavel,
            String website, String fax) {

        super(nome);

        this.responsavel = responsavel;
        this.website = website;
        this.fax = fax;
    }

    public String getFax() {
        return fax;
    }

    public void setFax(String fax) {
        this.fax = fax;
    }

    public Pessoa getResponsavel() {
        return responsavel;
    }

    public void setResponsavel(Pessoa responsavel) {
        this.responsavel = responsavel;
    }

    public String getWebsite() {
        return website;
    }

    public void setWebsite(String website) {
        this.website = website;
    }
}
