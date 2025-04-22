/**
 * Cesar.java
 *
 * Implementação de uma cifra de César.
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
package org.sergiolopes.formacao.cifracesar;

public class Cesar {

    private String texto;
    private int deslocamento;
    private int direccao;
    private char[] alfabeto;
    private char[] deslocado;

    public Cesar(String texto, int deslocamento, int direccao) {
        this.texto = texto;
        this.deslocamento = deslocamento;
        this.direccao = direccao;
        alfabeto = new char[]{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                    'K', 'L', 'M', 'N', 'O', 'P', 'K', 'R', 'S', 'T', 'U', 'V',
                    'W', 'X', 'Y', 'Z', 'Ç', 'Ã', 'Á', 'À', 'É', 'È', 'Ê', 'Í',
                    'Õ', 'Ó', 'Ú', '0', '1', '2', '3', '4', '5', '6', '7', '8',
                    '9'
                };
        actualizarDeslocalmento();
    }

    private void actualizarDeslocalmento() {
        deslocado = new char[alfabeto.length];
        int base, shift;
        for (base = 0, shift = deslocamento; shift < alfabeto.length; base++, shift++) {
            deslocado[base] = alfabeto[shift];
        }

        for (shift = 0; base < alfabeto.length; base++, shift++) {
            deslocado[base] = alfabeto[shift];
        }
    }

    public int getDeslocamento() {
        return deslocamento;
    }

    public void setDeslocamento(int deslocamento) {
        this.deslocamento = deslocamento;
        actualizarDeslocalmento();
    }

    public int getDireccao() {
        return direccao;
    }

    public void setDireccao(int direccao) {
        this.direccao = direccao;
    }

    public String getTexto() {
        return texto;
    }

    public void setTexto(String texto) {
        this.texto = texto;
    }

    private int posicaoAlfabeto(char c) {
        for (int i = 0; i < alfabeto.length; i++) {
            if (alfabeto[i] == Character.toUpperCase(c)) {
                return i;
            }
        }

        return -1;
    }

    private int posicaoDeslocado(char c) {
        for (int i = 0; i < deslocado.length; i++) {
            if (deslocado[i] == Character.toUpperCase(c)) {
                return i;
            }
        }

        return -1;
    }

    public String cifrar() {
        char temp;
        int pos;
        if (texto != null && !texto.isEmpty()) {
            StringBuilder c = new StringBuilder();

            int tamanho = texto.length();
            for (int i = 0; i < tamanho; i++) {
                pos = posicaoAlfabeto(texto.charAt(i));
                if (pos >= 0) {
                    temp = deslocado[pos];
                    temp = Character.isLowerCase(texto.charAt(i)) ? Character.toLowerCase(temp) : temp;
                    c.append(temp);
                } else {
                    c.append(texto.charAt(i));
                }

            }

            return c.toString();
        }

        return "";
    }

    public String decifrar() {
        char temp;
        int pos;
        if (texto != null && !texto.isEmpty()) {
            StringBuilder c = new StringBuilder();

            int tamanho = texto.length();
            for (int i = 0; i < tamanho; i++) {
                pos = posicaoDeslocado(texto.charAt(i));
                if (pos >= 0) {
                    temp = alfabeto[pos];
                    temp = Character.isLowerCase(texto.charAt(i)) ? Character.toLowerCase(temp) : temp;
                    c.append(temp);
                } else {
                    c.append(texto.charAt(i));
                }
            }

            return c.toString();
        }

        return "";
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder(alfabeto.length);
        for (int i = 0; i < alfabeto.length; i++) {
            sb.append(alfabeto[i]);
            sb.append(" ");
        }
        sb.append("\n");

        for (int i = 0; i < deslocado.length; i++) {
            sb.append(deslocado[i]);
            sb.append(" ");
        }

        return sb.toString();
    }
}
