/**
 * Jogo.java
 *
 * Jogo onde o jogador controla um pequeno rato.
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
package org.sergiolopes.formacao.plataformer;

import java.util.ArrayList;
import org.newdawn.slick.AppGameContainer;
import org.newdawn.slick.BasicGame;
import org.newdawn.slick.GameContainer;
import org.newdawn.slick.Graphics;
import org.newdawn.slick.Input;
import org.newdawn.slick.SlickException;
import org.newdawn.slick.geom.Rectangle;

public class Jogo extends BasicGame {

    private boolean iniciado;
    private ArrayList<Gnomo> gnomos;
    private Rato heroi;
    private Rectangle chao;
    private boolean morto;
    private GameContainer game;
    private long ultimaColocacao;
    private int intervaloColocacao;

    public Jogo() {
        super("Plataformer");
        iniciado = false;
    }

    public static void main(String[] args) throws SlickException {
        AppGameContainer app = new AppGameContainer(new Jogo());

        app.setDisplayMode(640, 480, false);
        app.start();
    }

    @Override
    public void init(GameContainer container) throws SlickException {
        game = container;

        heroi = new Rato(10, 410);
        gnomos = new ArrayList<Gnomo>();
        chao = new Rectangle(-10, 470, 660, 10);
        morto = false;
        iniciado = false;
        ultimaColocacao = 0;
        intervaloColocacao = 3500;
    }

    @Override
    public void update(GameContainer container, int delta) throws SlickException {
        ArrayList<Gnomo> remover = new ArrayList<Gnomo>();
        for (Gnomo g : gnomos) {
            if (g.getX() < -50) {
                remover.add(g);
            }
        }

        for (Gnomo g : remover) {
            gnomos.remove(g);
        }
        remover.clear();

        Input input = container.getInput();
        if (!iniciado) {
            if (input.isKeyPressed(Input.KEY_SPACE)) {
                iniciado = true;
            }
        } else if (!morto) {
            criarGnomo();

            heroi.update(container, delta);

            for (Gnomo g : gnomos) {
                g.update(container, delta);
            }

            for (Gnomo g : gnomos) {
                if (g.getQuadrado().intersects(heroi.getQuadrado())) {
                    morto = true;
                    break;
                }
            }
        }
    }

    public void render(GameContainer container, Graphics g) throws SlickException {
        if (!iniciado) {
            g.drawString("Carregue no espaço para iniciar.", 150, 230);
            g.drawString("Escape para sair.", 220, 300);
        } else if (morto) {
            g.drawString("Perdeu o jogo, foi apanhado por um Gnomo!", 150, 230);
            g.drawString("Prima qualquer tecla para continuar.", 180, 300);
        } else {
            g.draw(chao);

            for (Gnomo gnomo : gnomos) {
                gnomo.render(container, g);
            }
            heroi.render(container, g);
        }
    }

    private void criarGnomo() throws SlickException {
        long actual = System.currentTimeMillis();
        if ((int) (Math.random() * 100) % 2 == 0 && (actual - ultimaColocacao) > intervaloColocacao) {
            float velocidade = ((int) (Math.random() * 50) + 25);
            float x = ((int) (Math.random() * 60) + 670);
            gnomos.add(new Gnomo("Gnomo " + gnomos.size(), x, 442, velocidade));
            ultimaColocacao = System.currentTimeMillis();
        }
    }

    @Override
    public void keyPressed(int key, char c) {
        if (morto) {
            try {
                game.reinit();
            } catch (SlickException ex) {
            }
        } else if (Input.KEY_ESCAPE == key) {
            if (iniciado) {
                iniciado = false;
            } else {
                game.exit();
            }
        }
    }
}
