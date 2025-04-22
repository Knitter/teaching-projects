/*
 *  Contacto.java
 *
 *  Copyright (C) 2008  Sérgio Lopes
 *
 *  This file is part of AgendaDB4O.
 *
 *  AgendaDB4O is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  AgendaDB4O is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with AgendaDB4O. If not, see <http://www.gnu.org/licenses/gpl.html>.
 */
package org.sergiolopes.agendabd4o;

/**
 * Classe que representa o nosso contacto e que guarda os dados a registar para
 * cada contacto na agenda.
 *
 * @author Sérgio Lopes
 */
public class Contacto {

    private long id;
    private String nome;
    private String apelido;
    private String dataNascimento;
    private String telefone;
    private String telemovel;
    private String endereco;
    private String codigoPostal;
    private String localidade;

    public Contacto() {
        //DO NOTHING
    }

    public Contacto(String nome, String apelido, String dataNascimento, String telefone, String telemovel, String endereco, String codigoPostal, String localidade) {
        this.nome = nome;
        this.apelido = apelido;
        this.dataNascimento = dataNascimento;
        this.telefone = telefone;
        this.telemovel = telemovel;
        this.endereco = endereco;
        this.codigoPostal = codigoPostal;
        this.localidade = localidade;

        id = hashCode();
    }

    public String getApelido() {
        return apelido;
    }

    public void setApelido(String apelido) {
        this.apelido = apelido;
    }

    public String getCodigoPostal() {
        return codigoPostal;
    }

    public void setCodigoPostal(String codigoPostal) {
        this.codigoPostal = codigoPostal;
    }

    public String getDataNascimento() {
        return dataNascimento;
    }

    public void setDataNascimento(String dataNascimento) {
        this.dataNascimento = dataNascimento;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public long getId() {
        return id;
    }

    public void setId(long id) {
        this.id = id;
    }

    public String getLocalidade() {
        return localidade;
    }

    public void setLocalidade(String localidade) {
        this.localidade = localidade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
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

    @Override
    public boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }

        if (getClass() != obj.getClass()) {
            return false;
        }

        final Contacto other = (Contacto) obj;

        return this.id == other.id && (this.nome != null && this.nome.equals(other.nome))
                && (this.apelido != null && this.apelido.equals(other.apelido));
    }

    @Override
    public int hashCode() {
        int hash = 3;
        hash = 71 * hash + (this.nome != null ? this.nome.hashCode() : 0);
        hash = 71 * hash + (this.apelido != null ? this.apelido.hashCode() : 0);
        hash = 71 * hash + (this.dataNascimento != null ? this.dataNascimento.hashCode() : 0);
        hash = 71 * hash + (this.telefone != null ? this.telefone.hashCode() : 0);
        hash = 71 * hash + (this.telemovel != null ? this.telemovel.hashCode() : 0);
        hash = 71 * hash + (this.endereco != null ? this.endereco.hashCode() : 0);
        hash = 71 * hash + (this.codigoPostal != null ? this.codigoPostal.hashCode() : 0);
        hash = 71 * hash + (this.localidade != null ? this.localidade.hashCode() : 0);
        return hash;
    }
}
