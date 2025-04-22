/**
 * Entidade.java
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
import org.newdawn.slick.Graphics;
import org.newdawn.slick.SlickException;

public class Entidade {

    private String nome;
    private Quadricula posicao;
    private Animation animacao;
    private Jogo jogo;

    public Entidade(String nome, Quadricula posicao, Animation animacao, Jogo jogo) {
        this.nome = nome;
        this.posicao = posicao;
        this.animacao = animacao;
        this.jogo = jogo;
    }

    public Animation getAnimacao() {
        return animacao;
    }

    public void setAnimacao(Animation animacao) {
        this.animacao = animacao;
    }

    public Jogo getJogo() {
        return jogo;
    }

    public void setJogo(Jogo jogo) {
        this.jogo = jogo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Quadricula getPosicao() {
        return posicao;
    }

    public void setPosicao(Quadricula posicao) {
        this.posicao = posicao;
    }

    public void render(GameContainer container, Graphics g) throws SlickException {
        g.drawAnimation(animacao, animacao.getWidth() * getPosicao().getColuna(),
                animacao.getHeight() * getPosicao().getLinha());
    }
}
