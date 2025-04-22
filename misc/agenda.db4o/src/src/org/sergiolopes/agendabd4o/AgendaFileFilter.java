/*
 *  AgendaFileFilter.java
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

import java.io.File;
import javax.swing.filechooser.FileFilter;

/**
 * Classe usada pelo <em>JFileChooser</em> para permitir o filtro de ficheiros.
 *
 * @author Sérgio Lopes
 */
public class AgendaFileFilter extends FileFilter {

    @Override
    public boolean accept(File f) {
        if(f.isDirectory()) {
            return true;
        }
        
        int x = -1;
        return ((x = f.getName().lastIndexOf(".")) > 0 ? f.getName().substring(x + 1) : "").compareToIgnoreCase("dbo") == 0;
    }

    @Override
    public String getDescription() {
        return "Agenda de contactos";
    }
}
