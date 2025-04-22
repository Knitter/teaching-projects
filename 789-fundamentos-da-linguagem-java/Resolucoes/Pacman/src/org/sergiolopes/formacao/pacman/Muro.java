/**
 * Muro.java
 *
 * Implementação do Pacman.
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
package org.sergiolopes.formacao.pacman;

import org.sergiolopes.formacao.pacman.extra.Quadricula;
import org.sergiolopes.formacao.pacman.extra.Jogo;
import org.newdawn.slick.Animation;

public class Muro extends Entidade {

    public Muro(String nome, Quadricula posicao, Animation animacao, Jogo jogo) {
        super(nome, posicao, animacao, jogo);
    }

}
