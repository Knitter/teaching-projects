/*
 *  ModeloTabelContacto.java
 *
 *  Copyright (C) 2010  Sérgio Lopes
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

import java.util.ArrayList;
import javax.swing.table.AbstractTableModel;

/**
 * Faz a ligação entre a <em>JTable</em> usada para representar os dados e o modelo.
 *
 * @author Sérgio Lopes
 */
public class ModeloTabelaContacto extends AbstractTableModel implements AgendaListener {

    private Agenda agenda;
    private ArrayList<Contacto> contactos;

    public ModeloTabelaContacto(Agenda agenda) {
        this.agenda = agenda;
        if (this.agenda != null) {
            contactos = new ArrayList<Contacto>(this.agenda.listarTodosContactos());
        }
    }

    public int getRowCount() {
        if (contactos != null) {
            return contactos.size();
        }

        return 0;
    }

    /**
     * O número de colunas deste modelo é sempre igual.
     *
     * @return 5
     */
    public int getColumnCount() {
        return 5;
    }

    @Override
    public String getColumnName(int column) {
        switch (column) {
            case 0:
                return "Nome";
            case 1:
                return "Apelido";
            case 2:
                return "Telefone";
            case 3:
                return "Telemóvel";
            case 4:
                return "Endereço";
        }

        //NUNCA OCORRE
        return "";
    }

    public Object getValueAt(int rowIndex, int columnIndex) {
        if (rowIndex < contactos.size()) {
            switch (columnIndex) {
                case 0:
                    return contactos.get(rowIndex).getNome();
                case 1:
                    return contactos.get(rowIndex).getApelido();
                case 2:
                    return contactos.get(rowIndex).getTelefone();
                case 3:
                    return contactos.get(rowIndex).getTelemovel();
                case 4:
                    return contactos.get(rowIndex).getEndereco() + " "
                            + contactos.get(rowIndex).getCodigoPostal() + " "
                            + contactos.get(rowIndex).getLocalidade();
            }
        }

        return null;
    }

    public void contactoAdicionado(EventoAgenda e) {
        contactos.add(e.getNovo());
        fireTableDataChanged();
    }

    public void contactoRemovido(EventoAgenda e) {
        contactos.remove(e.getAntigo());
        fireTableDataChanged();
    }

    public void todosRemovidos(EventoAgenda e) {
        contactos.clear();
        fireTableDataChanged();
    }

    public void contactoActualizado(EventoAgenda e) {
        fireTableDataChanged();
    }

    /**
     * Permite alterar a <em>Agenda</em> que este modelo segue.
     *
     * @param agenda Nova agenda.
     */
    public void setAgenda(Agenda agenda) {
        this.agenda = agenda;
        if (contactos != null) {
            contactos.clear();
        }

        contactos = new ArrayList<Contacto>(agenda.listarTodosContactos());
        fireTableDataChanged();
    }

    /**
     * Devolve o contacto presente na linha indicada.
     *
     * @param linha Linha a procurar.
     * @return Contacto encontrado ou null se a linha é inválida.
     */
    public Contacto getContactoEm(int linha) {
        if (linha < contactos.size()) {
            return contactos.get(linha);
        }
        return null;
    }

    /**
     * Permite definir o termo de pesquisa a usar.
     * Não é a forma mais correcta de implementar o mecanismo de pesquisa mas o
     * foco do projecto é no uso do DB4O e não em algoritmos de pesquisa.
     *
     * @param termo Termo a usar.
     */
    public void setPesquisa(String termo) {
        if (agenda != null) {
            if (termo == null || termo.isEmpty()) {
                contactos = new ArrayList<Contacto>(agenda.listarTodosContactos());
            } else {
                contactos = new ArrayList<Contacto>(agenda.pesquisar(termo));
            }
            fireTableDataChanged();
        }
    }
}
