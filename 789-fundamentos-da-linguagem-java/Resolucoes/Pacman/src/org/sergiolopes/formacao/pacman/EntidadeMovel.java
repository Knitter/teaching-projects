/**
 * EntidadeMovel.java
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
import org.newdawn.slick.GameContainer;
import org.newdawn.slick.SlickException;
import org.newdawn.slick.geom.Vector2f;

public class EntidadeMovel extends Entidade {

    private float velocidade;
    private float x;
    private float y;
    private Vector2f direccao;

    public EntidadeMovel(String nome, Quadricula posicao, Animation animacao, Jogo jogo,
            float velocidade, float x, float y, Vector2f direccao) {
        super(nome, posicao, animacao, jogo);

        this.velocidade = velocidade;
        this.x = x;
        this.y = y;
        this.direccao = direccao;
    }

    public Vector2f getDireccao() {
        return direccao;
    }

    public void setDireccao(Vector2f direccao) {
        this.direccao = direccao;
    }

    public float getVelocidade() {
        return velocidade;
    }

    public void setVelocidade(float velocidade) {
        this.velocidade = velocidade;
    }

    public float getX() {
        return x;
    }

    public void setX(float x) {
        this.x = x;
    }

    public float getY() {
        return y;
    }

    public void setY(float y) {
        this.y = y;
    }

    public void update(GameContainer container, int delta) throws SlickException {
    }

    public boolean quadriculaValida(int linha, int coluna) {
        Quadricula possivel = getJogo().getQuadricula(linha, coluna);

        if (possivel == null) {
            return false;
        }

        if (possivel.getMuro() != null) {
            return false;
        }

        if (direccao.getX() == 1 && possivel.getPortaEste() != null) {
            return true;
        }

        if (direccao.getY() == -1 && possivel.getPortaNorte() != null) {
            return true;
        }

        if (direccao.getX() == -1 && possivel.getPortaOeste() != null) {
            return true;
        }

        if (direccao.getY() == 1 && possivel.getPortaSul() != null) {
            return true;
        }

        return true;

    }
}
