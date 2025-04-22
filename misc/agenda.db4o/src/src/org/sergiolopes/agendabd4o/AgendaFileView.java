/*
 *  AgendaFileView.java
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
import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.filechooser.FileView;

/**
 * Permite apresentar algumas informações na janela de diálogo criada pelo
 * <em>JFIleChooser</em>, especialmente o ícone usado para representar os ficheiros
 * da aplicação.
 *
 * @author Sérgio Lopes
 */
public class AgendaFileView extends FileView {

    @Override
    public String getName(File f) {
        return f.getName();
    }

    @Override
    public String getDescription(File f) {
        int x = -1;
        if (((x = f.getName().lastIndexOf(".")) > 0 ? f.getName().substring(x + 1) : "").compareToIgnoreCase("dbo") == 0) {
            return "Agenda de contactos";
        }

        return super.getDescription(f);
    }

    @Override
    public String getTypeDescription(File f) {
        int x = -1;
        if (((x = f.getName().lastIndexOf(".")) > 0 ? f.getName().substring(x + 1) : "").compareToIgnoreCase("dbo") == 0) {
            return "Agenda de contactos";
        }

        return super.getTypeDescription(f);
    }

    @Override
    public Icon getIcon(File f) {
        int x = -1;
        if (((x = f.getName().lastIndexOf(".")) > 0 ? f.getName().substring(x + 1) : "").compareToIgnoreCase("dbo") == 0) {
            return new ImageIcon(getClass().getResource("/org/sergiolopes/agendabd4o/images/large/easymoblog16.png"));
        }

        return super.getIcon(f);
    }
}
