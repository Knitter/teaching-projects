/**
 * Rato.java
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
import org.newdawn.slick.Input;
import org.newdawn.slick.SlickException;
import org.newdawn.slick.SpriteSheet;
import org.newdawn.slick.geom.Rectangle;

public class Rato {

    private Animation ani;
    private float x;
    private float y;
    private float yInicial;
    private boolean saltar;
    private boolean descer;
    private float distanciaSalto = 100;
    private float velocidadeSalto;
    private Rectangle quadrado;

    public Rato(float x, float y) throws SlickException {
        this.x = x;
        this.y = yInicial = y;

        SpriteSheet s = new SpriteSheet("rato.png", 64, 64);
        Image[] imgs = new Image[]{s.getSprite(0, 0), s.getSprite(1, 0), s.getSprite(2, 0), s.getSprite(3, 0)};
        ani = new Animation(imgs, 150);
        ani.setLooping(true);

        saltar = false;
        quadrado = new Rectangle(x, y, 64, 64);
    }

    public void update(GameContainer container, int delta) throws SlickException {
        if (ani.isStopped()) {
            ani.start();
        }

        if (!saltar && container.getInput().isKeyPressed(Input.KEY_SPACE)) {
            saltar = true;
        }

        float wave = distanciaSalto * delta;

        velocidadeSalto = 0;
        if (saltar) {
            velocidadeSalto = -((distanciaSalto * delta) / 1000f);
        } else if (descer) {
            velocidadeSalto = ((distanciaSalto * delta) / 1000f);
        }

        y += velocidadeSalto;

        if (y < yInicial - distanciaSalto) {
            saltar = false;
            descer = true;
        }

        if (y >= yInicial) {
            saltar = false;
            descer = false;
            y = yInicial;
        }

        quadrado.setX(x);
        quadrado.setY(y);
    }

    public void render(GameContainer container, Graphics g) throws SlickException {
        g.drawAnimation(ani, x, y);
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

    public Rectangle getQuadrado() {
        return quadrado;
    }

    public boolean aSaltar() {
        return saltar;
    }
}
