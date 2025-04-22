/*
 *  Agenda.java
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

import com.db4o.Db4oEmbedded;
import com.db4o.ObjectContainer;
import com.db4o.query.Predicate;
import java.util.List;
import java.util.Vector;

/**
 * Classe base da aplicação, representa uma agenda digital segundo os requisitos
 * que foram estipulados no artigo.
 *
 * @author Sérgio Lopes
 */
public class Agenda {

    //objecto que nos oferece acesso ao db4o
    private ObjectContainer db;
    private List<AgendaListener> listeners;

    /**
     * Cria uma nova agenda para o ficheiro especificado.
     * 
     * @param ficheiro Local onde serão guardados os dados, não tem de existir.
     */
    public Agenda(String ficheiro) {
        //criar uma agenda não é mais que abrir o ficheiro no disco onde vamos 
        //trabalhar os dados
        abrirDb(ficheiro);
    }

    /**
     * Regista qualquer listener que pretenda receber os eventos desta classe.
     *
     * @param l Listener a registar.
     */
    public void adicionarListener(AgendaListener l) {
        if (listeners == null) {
            listeners = new Vector<AgendaListener>();
        }

        listeners.add(l);
    }

    /**
     * Fecha a agenda, fechando o objecto de ligação ao db4o. Depois de fechado,
     * não é possível usar o motor.
     */
    public void fechar() {
        if (db != null) {
            db.close();
        }
    }

    /**
     * Permite abrir uma ligação ao motor de bases de dados. Vai instanciar o motor
     * e obter a instância de ObjectContainer que precisamos, bem como criar o ficheiro
     * para guardar os dados, se este ainda não existir.
     *
     * @param ficheiro Caminho para o ficheiro.
     */
    private void abrirDb(String ficheiro) {
        db = Db4oEmbedded.openFile(Db4oEmbedded.newConfiguration(), ficheiro);
    }

    /**
     * Permite adicionar um novo contacto.
     *
     * @param contacto Contacto a guardar.
     */
    public void adicionarContacto(Contacto contacto) {
        db.store(contacto);
        fireContactoAdicionado(new EventoAgenda(this, contacto, null));
    }

    /**
     * Permite remover um contacto.
     *
     * @param contacto Contacto a remover.
     */
    public void removerContacto(Contacto contacto) {
        db.delete(contacto);
        fireContactoRemovido(new EventoAgenda(this, null, contacto));
    }

    /**
     * Permite actualizar um contacto. Se o contacto não existir será adicionado.
     *
     * @param contacto Contacto a actualizar, se for novo será adicionado.
     */
    public void actualizarContacto(Contacto contacto) {
        db.store(contacto);
        fireContactoActualizado(new EventoAgenda(this));
    }

    /**
     * Remove todos os contactos.
     */
    public void removerTodos() {
        for (Contacto c : listarTodosContactos()) {
            db.delete(c);
        }

        fireTodosRemovidos(new EventoAgenda(this));
    }

    /**
     * Permite efecutar pesquisas de contactos. Utiliza queries nativas.
     *
     * @param termo Termo de pesquisa que pode ser qualquer um nome, apelido, localidade
     * telefone, telemóvel ou endereço.
     *
     * @return Lista com os contactos encontrados ou lista vazia, nunca null.
     */
    public List<Contacto> pesquisar(final String termo) {
        return db.query(new Predicate<Contacto>() {

            public boolean match(Contacto contacto) {
                if (contacto.getApelido().contains(termo)
                        || contacto.getNome().contains(termo)
                        || contacto.getLocalidade().contains(termo)
                        || contacto.getEndereco().contains(termo)
                        || contacto.getNome().contains(termo) || contacto.getTelefone().equals(termo)
                        || contacto.getTelemovel().equals(termo)) {
                    return true;
                }

                return false;
            }
        });
    }

    /**
     * Devolve todos os contactos registados na base de dados até ao momento.
     * Utiliza query especial com classe.
     *
     * @return Lista com os contactos encontrados ou lista vazia, nuca null.
     */
    public List<Contacto> listarTodosContactos() {
        return db.query(Contacto.class);
    }

    /**
     * Devolve o número de contactos existentes. Faz uso do método de pesquisa dado
     * que não há forma de saber quantos registos estão na base de dados.
     *
     * @return Número de registos existentes.
     */
    public int getNumeroContactos() {
        return listarTodosContactos().size();
    }

    private void fireContactoAdicionado(EventoAgenda e) {
        Vector<AgendaListener> temp = new Vector<AgendaListener>(listeners);

        for (AgendaListener l : temp) {
            l.contactoAdicionado(e);
        }
    }

    private void fireContactoRemovido(EventoAgenda e) {
        Vector<AgendaListener> temp = new Vector<AgendaListener>(listeners);

        for (AgendaListener l : temp) {
            l.contactoRemovido(e);
        }
    }

    private void fireContactoActualizado(EventoAgenda e) {
        Vector<AgendaListener> temp = new Vector<AgendaListener>(listeners);

        for (AgendaListener l : temp) {
            l.contactoActualizado(e);
        }
    }

    private void fireTodosRemovidos(EventoAgenda e) {
        Vector<AgendaListener> temp = new Vector<AgendaListener>(listeners);

        for (AgendaListener l : temp) {
            l.todosRemovidos(e);
        }
    }
}
