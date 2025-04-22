/*
 *  EventoAgenda.java
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

import java.util.EventObject;

public class EventoAgenda extends EventObject {

    private Contacto novo;
    private Contacto antigo;

    public EventoAgenda(Agenda source) {
        this(source, null, null);
    }

    public EventoAgenda(Agenda source, Contacto novo, Contacto antigo) {
        super(source);
        this.novo = novo;
        this.antigo = antigo;
    }

    public Contacto getNovo() {
        return novo;
    }

    public Contacto getAntigo() {
        return antigo;
    }
}
