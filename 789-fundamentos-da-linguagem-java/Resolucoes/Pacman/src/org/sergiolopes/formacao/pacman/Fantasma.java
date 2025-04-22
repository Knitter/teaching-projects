/**
 * Fantasma.java
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

public class Fantasma extends EntidadeMovel {

    public static final int ESTADO_DORMENTE = 0;
    public static final int ESTADO_ACTIVO = 1;
    public static final int ESTADO_FUGIR = 2;
    private int pontos;

    public Fantasma(String nome, Quadricula posicao, Animation animacao, Jogo jogo,
            float velocidade, float x, float y, Vector2f direccao) {
        super(nome, posicao, animacao, jogo, velocidade, x, y, direccao);
    }

    @Override
    public void update(GameContainer container, int delta) throws SlickException {
        float deslocamentoX = ((getVelocidade() * delta * getDireccao().getX()) / 1000f);
        float deslocamentoY = ((getVelocidade() * delta * getDireccao().getY()) / 1000f);

        float x = getX() + deslocamentoX;
        float y = getY() + deslocamentoY;

        int coluna = (int) (x / 27);
        int linha = (int) (y / 27);

        if (quadriculaValida(linha, coluna)) {
            setX(x);
            setY(y);

            Quadricula proxima = getJogo().getQuadricula(linha, coluna);
            getPosicao().removerFantasma(this);

            setPosicao(proxima);
            proxima.adicionarFantasma(this);
        } else {
            switch ((int) (Math.random() * 4)) {
                case 0:
                    setDireccao(new Vector2f(1, 0));
                    break;
                case 1:
                    setDireccao(new Vector2f(-1, 0));
                    break;
                case 2:
                    setDireccao(new Vector2f(0, 1));
                    break;
                case 3:
                    setDireccao(new Vector2f(0, -1));
                    break;
            }
        }
    }

    public int getPontos() {
        return pontos;
    }
}
