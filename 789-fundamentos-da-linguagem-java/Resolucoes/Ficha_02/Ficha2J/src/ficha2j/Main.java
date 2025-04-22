/**
 * Main.java
 *
 * Leitura de um número de vírgula flutuante.
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
package ficha2j;

import java.util.Scanner;

public class Main {

    
    public static void main(String[] args) {
        Scanner leituras = new Scanner(System.in);

        System.out.println("Indique um número: ");
        double numero;

        numero = leituras.nextDouble();

        System.out.println("Lido: " + numero);
    }

}
