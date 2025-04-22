/*
 *  AgendaListener.java
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

import java.util.EventListener;

/**
 * Interface que representa todos os objectos que desejam ser notoficados de alterações
 * ao modelo Agenda.
 *
 * @author Sérgio Lopes
 */
public interface AgendaListener extends EventListener {

    /**
     * Disparado quando um dos contactos foi adicionado.
     *
     * @param e Evento com informações
     */
    void contactoAdicionado(EventoAgenda e);

    /**
     * Disparado quando um dos contactos foi removido.
     *
     * @param e Evento com informações
     */
    void contactoRemovido(EventoAgenda e);

    /**
     * Disparado quando todos os contactos foram removidos da bases de dados.
     *
     * @param e Evento com informações
     */
    void todosRemovidos(EventoAgenda e);

    /**
     * Disparado quando um dos contactos foi actualizado. Se o contacto era novo
     * e for inserido em vez de actualizado, este evento pode levar informações
     * inválidas.
     *
     * @param e Evento com informações
     */
    void contactoActualizado(EventoAgenda e);
}
