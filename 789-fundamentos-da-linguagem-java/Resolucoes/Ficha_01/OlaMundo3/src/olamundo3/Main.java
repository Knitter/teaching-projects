/**
 * Main.java
 *
 * Exemplo de aplicação Java.
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
package olamundo3;

import java.awt.BorderLayout;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class Main extends JFrame {

    public Main() {
        super("Olá Mundo");
    }

    private void init() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        getContentPane().setLayout(new BorderLayout());

        JLabel etiqueta = new JLabel("Olá Mundo!");
        etiqueta.setHorizontalAlignment(JLabel.CENTER);
        getContentPane().add(etiqueta, BorderLayout.CENTER);

        setSize(420, 360);
    }

    public static void main(String[] args) {
        Main om = new Main();
        om.init();
        om.setVisible(true);
    }
}
