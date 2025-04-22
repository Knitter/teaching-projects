/**
 * Main.java
 *
 * Cálculo da média de notas.
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
package ficha2n;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double media = 0.0;
        double soma = 0.0;
        double nota;
        int numNotas = 0;

        do {
            System.out.println("Indique a nota: ");
            nota = sc.nextDouble();

            if(nota >= 0 && nota <= 20) {
                numNotas++;
                soma += nota;

                //soma = soma + nota;
            }
        } while (nota >= 0.0);

        if(numNotas > 0) {
            media = soma / numNotas;
            System.out.println("Média encontrada: " + media);
        } else {
            System.out.println("Não foram inseridas notas válidas.");
        }
    }
}
