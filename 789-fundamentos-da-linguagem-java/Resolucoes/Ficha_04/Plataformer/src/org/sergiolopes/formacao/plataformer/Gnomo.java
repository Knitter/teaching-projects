/**
 * Gnomo.java
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

import org.newdawn.slick.Animation;
import org.newdawn.slick.GameContainer;
import org.newdawn.slick.Graphics;
import org.newdawn.slick.Image;
import org.newdawn.slick.SlickException;
import org.newdawn.slick.SpriteSheet;
import org.newdawn.slick.geom.Rectangle;

public class Gnomo {

    private Animation ani;
    private String nome;
    private float x;
    private float y;
    private float velocidade;
    private Rectangle quadrado;

    public Gnomo(String nome, float x, float y, float velocidade) throws SlickException {
        this.nome = nome;
        this.x = x;
        this.y = y;
        this.velocidade = velocidade;

        SpriteSheet s = new SpriteSheet("gnomos.png", 32, 32);
        Image[] imgs = new Image[]{s.getSprite(0, 0), s.getSprite(1, 0), s.getSprite(2, 0)};
        ani = new Animation(imgs, 150);
        ani.setLooping(true);

        quadrado = new Rectangle(x, y, 32, 32);
    }

    public void update(GameContainer container, int delta) throws SlickException {
        if (ani.isStopped()) {
            ani.start();
        }

        x -= (velocidade * delta) / 1000f;
        quadrado.setX(x);
    }

    public void render(GameContainer container, Graphics g) throws SlickException {
        g.drawAnimation(ani, x, y);
    }

    public Rectangle getQuadrado() {
        return quadrado;
    }

    public float getX() {
        return x;
    }
}
