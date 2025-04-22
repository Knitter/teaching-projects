/**
 * Jogo.java
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

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.net.URISyntaxException;
import java.util.ArrayList;
import org.newdawn.slick.Animation;
import org.newdawn.slick.AppGameContainer;
import org.newdawn.slick.BasicGame;
import org.newdawn.slick.GameContainer;
import org.newdawn.slick.Graphics;
import org.newdawn.slick.Input;
import org.newdawn.slick.SlickException;
import org.newdawn.slick.geom.Vector2f;
import org.sergiolopes.formacao.pacman.Banana;
import org.sergiolopes.formacao.pacman.Cereja;
import org.sergiolopes.formacao.pacman.Fantasma;
import org.sergiolopes.formacao.pacman.Milho;
import org.sergiolopes.formacao.pacman.Muro;
import org.sergiolopes.formacao.pacman.Pacman;
import org.sergiolopes.formacao.pacman.Porta;
import org.sergiolopes.formacao.pacman.SuperMilho;
import org.sergiolopes.formacao.pacman.extra.GestorImagens;

public class Jogo extends BasicGame {

    private static final int PONTOS_MILHO = 0;
    private static final int PONTOS_SUPER_MILHO = 0;
    private static final int PONTOS_CEREJA = 0;
    private static final int PONTOS_BANANA = 0;
    private GameContainer game;
    private Quadricula[][] tabuleiro;
    private GestorImagens gestorImagens;
    private int nivelActual;
    //
    private int numFantasmas;
    private int posicaoInicialFantasmaX;
    private int posicaoInicialFantasmaY;
    private ArrayList<Fantasma> fantasmas;
    private Animation animacaoFantasmaNorte;
    private Animation animacaoFantasmaEste;
    private Animation animacaoFantasmaSul;
    private Animation animacaoFantasmaOeste;
    private Vector2f direccaoFantasmaNorte;
    private Vector2f direccaoFantasmaEste;
    private Vector2f direccaoFantasmaSul;
    private Vector2f direccaoFantasmaOeste;
    //
    private Pacman pacman;
    private Animation animacaoPacmanNorte;
    private Animation animacaoPacmanEste;
    private Animation animacaoPacmanSul;
    private Animation animacaoPacmanOeste;
    private Vector2f direccaoPacmanNorte;
    private Vector2f direccaoPacmanEste;
    private Vector2f direccaoPacmanSul;
    private Vector2f direccaoPacmanOeste;
    //
    private boolean iniciado;

    public Jogo() {
        super("Pacman");

        gestorImagens = new GestorImagens();

        nivelActual = 1;
    }

    public Quadricula getQuadricula(int linha, int coluna) {
        return tabuleiro[linha][coluna];
    }

    public static void main(String[] args) throws SlickException {
        AppGameContainer app = new AppGameContainer(new Jogo());

        app.setDisplayMode(567, 459, false);
        app.start();
    }

    @Override
    public void init(GameContainer container) throws SlickException {
        game = container;

        if (!gestorImagens.iniciado()) {
            gestorImagens.carregarImagens();
        }

        carregarNivel(nivelActual);

        iniciado = false;
    }

    @Override
    public void update(GameContainer container, int delta) throws SlickException {
        if (!iniciado) {
            if (container.getInput().isKeyPressed(Input.KEY_SPACE)) {
                iniciado = true;
            }
        } else {
            pacman.update(container, delta);

            for (Fantasma f : fantasmas) {
                f.update(container, delta);
            }
        }
    }

    public void render(GameContainer container, Graphics g) throws SlickException {
        if (!iniciado) {
            g.drawString("Prima espaço para iniciar", 50, 150);
        } else {

            int linha, coluna;
            for (linha = 0; linha < tabuleiro.length; linha++) {
                for (coluna = 0; coluna < tabuleiro[linha].length; coluna++) {
                    tabuleiro[linha][coluna].render(container, g);
                }
            }
        }
    }

    private void carregarNivel(int id) {
        BufferedReader bf = null;
        try {
            animacaoPacmanNorte = new Animation(gestorImagens.getImagensDe("pacmanNorte"), 150);
            animacaoPacmanEste = new Animation(gestorImagens.getImagensDe("pacmanEste"), 150);
            animacaoPacmanSul = new Animation(gestorImagens.getImagensDe("pacmanSul"), 150);
            animacaoPacmanOeste = new Animation(gestorImagens.getImagensDe("pacmanOeste"), 150);

            direccaoPacmanNorte = new Vector2f(0, -1);
            direccaoPacmanEste = new Vector2f(1, 0);
            direccaoPacmanSul = new Vector2f(0, 1);
            direccaoPacmanOeste = new Vector2f(-1, 0);

            animacaoFantasmaNorte = new Animation(gestorImagens.getImagensDe("fantasmaActivoNorte"), 150);
            animacaoFantasmaEste = new Animation(gestorImagens.getImagensDe("fantasmaActivoEste"), 150);
            animacaoFantasmaSul = new Animation(gestorImagens.getImagensDe("fantasmaActivoSul"), 150);
            animacaoFantasmaOeste = new Animation(gestorImagens.getImagensDe("fantasmaActivoOeste"), 150);

            direccaoFantasmaNorte = new Vector2f(0, -1);
            direccaoFantasmaEste = new Vector2f(1, 0);
            direccaoFantasmaSul = new Vector2f(0, 1);
            direccaoFantasmaOeste = new Vector2f(-1, 0);

            //# - Muro / M - Milho / S - SuperMilho / 0 - Vazio
            //L - Porta Oeste, R - Porta Este, D - Porta Sul, U - Porta Norte
            //B - Banana / C - Cereja / P - Pacman / G - Posição inicial dos fantasmas
            bf = new BufferedReader(new FileReader(new File(getClass().getResource("/org/sergiolopes/formacao/pacman/niveis/nivel"
                    + id + ".dat").toURI())));

            int linhas = 0, colunas = 0;
            int linha = 0, coluna;
            //ler primeira linha com indicação de linhas,colunas,fantasmas
            String texto = bf.readLine();
            if (texto != null) {
                String[] temp = texto.split(",");
                if (temp.length != 3) {
                    System.err.println("Formatao do nível é incorrecto! Não tem cabeçalho.");
                    game.exit();
                }

                linhas = Integer.parseInt(temp[0]);
                colunas = Integer.parseInt(temp[1]);
                numFantasmas = Integer.parseInt(temp[2]);
                fantasmas = new ArrayList<Fantasma>(numFantasmas);
            } else {
                System.err.println("Impossível ler o ficheiro de nível.");
                game.exit();
            }

            tabuleiro = new Quadricula[linhas][colunas];
            for (linha = 0; linha < linhas; linha++) {
                for (coluna = 0; coluna < colunas; coluna++) {
                    tabuleiro[linha][coluna] = new Quadricula(linha, coluna);
                }
            }

            linha = coluna = 0;
            while ((texto = bf.readLine()) != null) {
                for (coluna = 0; coluna < colunas; coluna++) {
                    switch (texto.charAt(coluna)) {
                        case '#':
                            tabuleiro[linha][coluna].setMuro(new Muro("", tabuleiro[linha][coluna],
                                    new Animation(gestorImagens.getImagensDe("muro"), 1000), this));
                            break;
                        case 'M':
                            tabuleiro[linha][coluna].setMilho(new Milho(texto, tabuleiro[linha][coluna],
                                    new Animation(gestorImagens.getImagensDe("milho"), 1000), this, PONTOS_MILHO));
                            break;
                        case 'S':
                            tabuleiro[linha][coluna].setSuperMilho(new SuperMilho(texto, tabuleiro[linha][coluna],
                                    new Animation(gestorImagens.getImagensDe("supermilho"), 1000), this, PONTOS_SUPER_MILHO));
                            break;
                        case 'L':
                            tabuleiro[linha][coluna].setPortaOeste(new Porta("", tabuleiro[linha][coluna],
                                    new Animation(gestorImagens.getImagensDe("portaOeste"), 1000), this));
                            break;
                        case 'R':
                            tabuleiro[linha][coluna].setPortaOeste(new Porta("", tabuleiro[linha][coluna],
                                    new Animation(gestorImagens.getImagensDe("portaEste"), 1000), this));
                            break;
                        case 'D':
                            tabuleiro[linha][coluna].setPortaOeste(new Porta("", tabuleiro[linha][coluna],
                                    new Animation(gestorImagens.getImagensDe("portaSul"), 1000), this));
                            break;
                        case 'U':
                            tabuleiro[linha][coluna].setPortaOeste(new Porta("", tabuleiro[linha][coluna],
                                    new Animation(gestorImagens.getImagensDe("portaNorte"), 1000), this));
                            break;
                        case 'B':
                            tabuleiro[linha][coluna].setBanana(new Banana(texto, tabuleiro[linha][coluna],
                                    new Animation(gestorImagens.getImagensDe("banana"), 1000), this, PONTOS_BANANA));
                            break;
                        case 'C':
                            tabuleiro[linha][coluna].setCereja(new Cereja(texto, tabuleiro[linha][coluna],
                                    new Animation(gestorImagens.getImagensDe("cereja"), 1000), this, PONTOS_CEREJA));
                            break;
                        case 'P':
                            pacman = new Pacman(texto, tabuleiro[linha][coluna], animacaoPacmanEste, this, 200,
                                    coluna * 27, linha * 27, direccaoPacmanEste);
                            tabuleiro[linha][coluna].setPacman(pacman);
                            break;
                        case 'G':
                            posicaoInicialFantasmaX = coluna;
                            posicaoInicialFantasmaY = linha;

                            Fantasma f;
                            for (int i = 0; i < numFantasmas; i++) {
                                f = new Fantasma("F-" + i, tabuleiro[linha][coluna], animacaoFantasmaEste, this, 200,
                                        coluna * 27, linha * 27, direccaoFantasmaEste);
                                fantasmas.add(f);
                                tabuleiro[linha][coluna].adicionarFantasma(f);
                            }

                            break;
                    }
                }
                linha++;
            }

        } catch (FileNotFoundException ex) {
            System.err.println("Ficheiro de nível inexistente. ID: " + id);
            System.err.println(ex.getMessage());
        } catch (URISyntaxException ex) {
            System.err.println("Erro ao converter URL de ficheiro de nível");
            System.err.println(ex.getMessage());
        } catch (IOException ex) {
            System.err.println("Erro de acesso ao sistema de ficheiros.");
            System.err.println(ex.getMessage());
        }
    }

    @Override
    public void keyPressed(int key, char c) {
        if (key == Input.KEY_UP) {
            pacman.setAnimacao(animacaoPacmanNorte);
            pacman.setDireccao(direccaoPacmanNorte);
        } else if (key == Input.KEY_RIGHT) {
            pacman.setAnimacao(animacaoPacmanEste);
            pacman.setDireccao(direccaoPacmanEste);
        } else if (key == Input.KEY_DOWN) {
            pacman.setAnimacao(animacaoPacmanSul);
            pacman.setDireccao(direccaoPacmanSul);
        } else if (key == Input.KEY_LEFT) {
            pacman.setAnimacao(animacaoPacmanOeste);
            pacman.setDireccao(direccaoPacmanOeste);
        }
    }

    public void pacmanMorreu() {
        
    }
}
