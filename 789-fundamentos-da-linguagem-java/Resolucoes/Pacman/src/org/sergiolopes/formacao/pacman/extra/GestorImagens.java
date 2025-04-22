/**
 * GestorImagens.java
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

import java.util.HashMap;
import org.newdawn.slick.Image;
import org.newdawn.slick.SlickException;

public class GestorImagens {

    private HashMap<String, Image[]> imagens;
    private boolean iniciado;

    public GestorImagens() {
        imagens = new HashMap<String, Image[]>();
    }

    public void carregarImagens() throws SlickException {
        iniciado = true;
        imagens.put("banana", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/banana.gif")});
        imagens.put("cereja", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/cereja.gif")});
        imagens.put("muro", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/muro.gif")});
        imagens.put("milho", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/milho.gif")});
        imagens.put("supermilho", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/smilho.gif")});
        imagens.put("portaNorte", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/portaU.gif")});
        imagens.put("portaEste", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/portaR.gif")});
        imagens.put("portaSul", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/portaD.gif")});
        imagens.put("portaOeste", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/portaL.gif")});

        Image pac = new Image("org/sergiolopes/formacao/pacman/imagens/pac.gif");
        imagens.put("pacmanNorte", new Image[]{pac, new Image("org/sergiolopes/formacao/pacman/imagens/pacU.gif")});
        imagens.put("pacmanEste", new Image[]{pac, new Image("org/sergiolopes/formacao/pacman/imagens/pacR.gif")});
        imagens.put("pacmanSul", new Image[]{pac, new Image("org/sergiolopes/formacao/pacman/imagens/pacD.gif")});
        imagens.put("pacmanOeste", new Image[]{pac, new Image("org/sergiolopes/formacao/pacman/imagens/pacL.gif")});

        imagens.put("fantasmaActivoNorte", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/fanAU.gif")});
        imagens.put("fantasmaActivoEste", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/fanAR.gif")});
        imagens.put("fantasmaActivoSul", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/fanAD.gif")});
        imagens.put("fantasmaActivoOeste", new Image[]{new Image("org/sergiolopes/formacao/pacman/imagens/fanAL.gif")});
    }

    public Image[] getImagensDe(String nome) {
        return imagens.get(nome);
    }

    public boolean iniciado() {
        return iniciado;
    }
}
