/**
 * Main.java
 *
 * Conversor entre de moedas entre escudos e euros.
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
package ficha2q;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int op;
        double valor;
        double resultado;

        System.out.println("Que conversão pretende?");
        System.out.println("1 - Euros para Escudos");
        System.out.println("2 - Escudos para Euros");

        op = sc.nextInt();

        System.out.println("Valor a converter: ");
        valor = sc.nextDouble();
        if(op == 1) {
            resultado = valor * 200.482;
            System.out.println("Resultado: " + resultado);
        } else if(op == 2) {
            resultado = valor / 200.482;
            System.out.println("Resultado: " + resultado);
        } else {
            System.out.println("Opção inválida.");
        }
    }

}
