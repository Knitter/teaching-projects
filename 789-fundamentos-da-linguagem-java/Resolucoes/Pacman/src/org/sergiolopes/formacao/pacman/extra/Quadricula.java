/**
 * Quadricula.java
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
package org.sergiolopes.formacao.pacman.extra;

import java.util.ArrayList;
import org.newdawn.slick.GameContainer;
import org.newdawn.slick.Graphics;
import org.newdawn.slick.SlickException;
import org.sergiolopes.formacao.pacman.Banana;
import org.sergiolopes.formacao.pacman.Cereja;
import org.sergiolopes.formacao.pacman.Fantasma;
import org.sergiolopes.formacao.pacman.Milho;
import org.sergiolopes.formacao.pacman.Muro;
import org.sergiolopes.formacao.pacman.Pacman;
import org.sergiolopes.formacao.pacman.Porta;
import org.sergiolopes.formacao.pacman.SuperMilho;

public class Quadricula {

    private int linha;
    private int coluna;
    private Pacman pacman;
    private Milho milho;
    private SuperMilho superMilho;
    private Cereja cereja;
    private Banana banana;
    private Porta portaNorte;
    private Porta portaEste;
    private Porta portaSul;
    private Porta portaOeste;
    private ArrayList<Fantasma> fantasmas;
    private Muro muro;

    public Quadricula(int linha, int coluna) {
        this.linha = linha;
        this.coluna = coluna;

        fantasmas = new ArrayList<Fantasma>();
    }

    public int getColuna() {
        return coluna;
    }

    public void setColuna(int coluna) {
        this.coluna = coluna;
    }

    public int getLinha() {
        return linha;
    }

    public void setLinha(int linha) {
        this.linha = linha;
    }

    public Banana getBanana() {
        return banana;
    }

    public void setBanana(Banana banana) {
        this.banana = banana;
    }

    public Cereja getCereja() {
        return cereja;
    }

    public void setCereja(Cereja cereja) {
        this.cereja = cereja;
    }

    public ArrayList<Fantasma> getFantasmas() {
        return fantasmas;
    }

    public void adicionarFantasma(Fantasma fantasma) {
        fantasmas.add(fantasma);
    }

    public void removerFantasma(Fantasma fantasma) {
        fantasmas.remove(fantasma);
    }

    public Milho getMilho() {
        return milho;
    }

    public void setMilho(Milho milho) {
        this.milho = milho;
    }

    public Pacman getPacman() {
        return pacman;
    }

    public void setPacman(Pacman pacman) {
        this.pacman = pacman;
    }

    public Porta getPortaEste() {
        return portaEste;
    }

    public void setPortaEste(Porta portaEste) {
        this.portaEste = portaEste;
    }

    public Porta getPortaNorte() {
        return portaNorte;
    }

    public void setPortaNorte(Porta portaNorte) {
        this.portaNorte = portaNorte;
    }

    public Porta getPortaOeste() {
        return portaOeste;
    }

    public void setPortaOeste(Porta portaOeste) {
        this.portaOeste = portaOeste;
    }

    public Porta getPortaSul() {
        return portaSul;
    }

    public void setPortaSul(Porta portaSul) {
        this.portaSul = portaSul;
    }

    public SuperMilho getSuperMilho() {
        return superMilho;
    }

    public void setSuperMilho(SuperMilho superMilho) {
        this.superMilho = superMilho;
    }

    public Muro getMuro() {
        return muro;
    }

    public void setMuro(Muro muro) {
        this.muro = muro;
    }

    public void render(GameContainer container, Graphics g) throws SlickException {
        if (muro != null) {
            muro.render(container, g);
        } else {

            if (pacman != null) {
                pacman.render(container, g);
            }

            if (milho != null) {
                milho.render(container, g);
            }
            if (superMilho != null) {
                superMilho.render(container, g);
            }

            if (cereja != null) {
                cereja.render(container, g);
            }

            if (banana != null) {
                banana.render(container, g);
            }

            if (portaNorte != null) {
                portaNorte.render(container, g);
            }
            if (portaEste != null) {
                portaEste.render(container, g);
            }
            if (portaSul != null) {
                portaSul.render(container, g);
            }
            if (portaOeste != null) {
                portaOeste.render(container, g);
            }

            for (Fantasma f : fantasmas) {
                f.render(container, g);
            }
        }
    }

    public boolean temFantasma() {
        return !fantasmas.isEmpty();
    }
}
