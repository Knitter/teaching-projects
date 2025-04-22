/**
 * DICA: Comentário de ficheiro, usado normalmente para informações de copyright e licenças.
 */

//- Estrutura de packages, já mencionada na aula prática 1, representa a estrutura de
//- diretorias presentes no APK final, e na pasta do projeto.
//-
//- Apresentar a pasta do projeto para exemplificar o ponto anterior.
package pt.ipleiria.estg.javaandroid;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.KeyEvent;
import android.widget.EditText;
import android.widget.TextView;

import java.sql.SQLOutput;

/**
 * DICA: Comentário de classe, usado para descrever o objetivo desta classe no programa e para
 * gerar a documentação para programadores.
 *
 * DICA: Permite anotações para informações especiais como autor ou referências a outras classes.
 *
 * @author Sérgio Lopes
 * @see android.app.Activity
 */
//- Sintaxe da definição de uma classe.
public class SintaxeJava extends AppCompatActivity {

    private int numeroSecreto;
    private int tentativas = 5;
    private boolean inicio = true;

    //- Anotações podem ser usadas para fornecer informações a aplicações externas, alterar o
    //- resultado de compilação ou de execução de código
    //-
    //- Ex.: Anotação @Override permite informar o compilador que este método é a reimplementação
    //- de outro existente na classe pai. Se escrevermos mal a assinatura do método o compilador
    //- vai avisar-nos do erro.
    //-
    //- NOTA: Assinatura do método é composta por: visibilidade + tipo de retorno + nome + tipos de parâmetros
    //-
    //- Ex.: Podemos injetar código automaticamente (utilização avançada) durante a compilação ou
    //- durante a execução da aplicação.
    //-
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        //- NOTA: Ignorar create da activity, setContentView, que será usado apenas para o exercício final de criação
        // de um jogo de adivinha :)
        //-
        //- NOTA: TextView precisa de ter um ID, confirmar e mencionar em aula caso o IDE não adicione o componete com
        //- um ID
        super.onCreate(savedInstanceState);
        setContentView(R.layout.sintaxe_java);
        //--------------------------------------------

        // Regras base:
        //- * Comentários de linha e comentários de bloco como  em C#
        //- * Todas as instruções terminam com ponto-e-vírgula
        //- * A linguagem é case-sensitve
        //- * Nomes de variáveis começam com minúscula, nomes de classes com maíuscula
        //- * Ao contrário de C# não há noção de propriedades com getter/setter automático
        //- * Tipos básicos/primitivos (não objetos): int, float, boolean, char, byte, double, short, long
        //-
        //- Sintaxe para declaração de variáveis: <tipo de dados> <nome da variável> [= valor inicial];
        //
        int nomeVariavel = 10;

        //- Tipos de dados possíveis
        double a = 0.34;
        char b = 'v';     //- usa plicas em vez de aspas
        boolean c = true; //- duas opções apenas, true/false
        float f = 2;
        short s = 3;

        //- NOTA: Java é case-sensitive
        int x, y, z;
        //- Vs.
        int X, Y, Z;

        String demo = "Demonstração";

        //- Erro de sintaxe
        //demo + a;

        demo = demo + ": " + a;

        //- NOTA: Vai aparecer no painel "Android Monitor" ou "Run" no fundo do ecrã, mistura com outro texto.
        System.out.println("-------> TEXTO 1: " + demo);

        demo += demo;
        System.out.println("-------> TEXTO 2: " + demo);

        //- Condições + Operadores
        //- Ops: +, -, *, %, /, +=, -= (etc), ++/--, =
        //- Deixar que experimentem os restantes operadores se se verificar relevante, conforme estado da sala.
        x = 5;
        y = 3;

        //- NOTA:/DICA: se escreverem "sout" seguido (sem as aspas) e carregarem no "tab" o IDE escreve ou System.out.println().
        System.out.println("-------> TEXTO 3: x + y = " + (x + y));

        System.out.println("-------> TEXTO 4: Divisão inteira = " + (x / y));
        System.out.println("-------> TEXTO 5: Resto da divisão inteira = " + (x % y));

        //- NOTA: Uso de caracteres de escape para incluir aspas dentro de aspas.
        //- NOTA: Cast para forçar divisão com vírgula flutuante.
        System.out.println("-------> TEXTO 6: Divisão \"normal\" " + (x / (double)y));


        //- NOTA: Explicar diferentes tipos de controlos de fluxo
        if(x <= 5) {
            System.out.println("-------> TEXTO 6: Menor a igual a 5");
        }

        if(y > x) {
            System.out.println("-------> TEXTO 7: y maior que x");
        } else {
            System.out.println("-------> TEXTO 7: y menor que x");
        }

        demo = "A";
        switch(demo) {
            case "A":
                System.out.println("-------> TEXTO 8: Switch funciona com strings tal como com valores primitivos");
                break;
            case "B":
                System.out.println("-------> TEXTO 8: Nunca será executado?");
        }

        for(int g = 0; g < 5; g++) {
            System.out.println("-------> TEXTO 9: " + g);
        }

        for(int g = 5; g-- > 0;) {
            System.out.println("-------> TEXTO 10: " + g);
        }

        int g = 5;
        do {
            System.out.println("-------> TEXTO 11: " + g);
        } while(g++ < 10);

        g = 5;
        while(g < 10) {
            System.out.println("-------> TEXTO 12: " + g);
            g++;
        }

        //- Criar e invocar métodos
        repetidor("Olá mundo!", 3);
        System.out.println("3^2 = " + potencia2(3));
        System.out.println("3^2 = " + potencia(3, 2));
        System.out.println("3^5 = " + potencia(3, 5));

        //- NOTA: Neste ponto, avaliar o estado da aula e, se possível (deve existir tempo suficiente), introduzir
        //- o exercício:
        //- * Implementar um método que permita um jogo de adivinhar números. A aplicação gera um número aleatório usando
        //-   o método fornecido, permite que o utilizador tente 5 vezes para descobrir o número que deve ser entre 1 e 100.
        //-
        jogarAdivinha();
    }

    /**
     * @param repeticao
     * @param vezes
     */
    private void repetidor(String repeticao, int vezes) {
        for(int i = 0; i < vezes; i++) {
            System.out.println(repeticao);
        }
    }

    /**
     * @param base
     * @return
     */
    private double potencia2(double base) {
        return base * base;
    }

    //- DICA: Basta escrever /** e carregar em "enter" para que seja criada a secção de comentários com os parâmetros
    //- de entrada e de saída.
    private double potencia(double base, int potencia) {
        return Math.pow(base, potencia);
    }

    /**
     * Gera um número aleatório entre <em>minimo</em> e <em>maximo</em>.
     *
     * @param minimo Valor mínimo, não pode ser inferior a zero.
     * @param maximo Valor máximo.
     *
     * @return Valor aleatório gerado.
     */
    private int aleatorio(int minimo, int maximo) {
        return (int) (Math.random() * 10 + 1);
    }

    //- NOTA: A implementar totalmente pelos alunos, fornecendo apenas as duas linhas para obter as views
    //- NOTA: Mostrar/Adicionar o campo de input que não é gerado pelo assistente (EditText#numero)
    //- NOTA: Coloquei os dois componentes com largura do parent (match_parent), alterei o tipo do EditText para apenas
    //- "number" e adicionei uma hint
    private void jogarAdivinha() {
        TextView resultado = (TextView) findViewById(R.id.resultado);
        EditText numero = (EditText) findViewById(R.id.numero);

        if(inicio) {
            numeroSecreto = aleatorio(1, 5);
            System.out.println("numeroSecreto: " + numeroSecreto);

            //- NOTA: Usei esta opção para ter um botão a menos, será código que tem de ser fornecido porque ainda
            //- não viram classes, e muito menos classes anónimas, mas já lhes permite ver mais sintaxe
            //-
            //- A implementação base é tratar o evento e devolver true/false caso seja para indicar que foi tratado ou
            //- não. E aqui estou a reutilizar sempre o mesmo método "jogarAdivinha", se mudarem o nome têm de mudar
            //- aqui também. Se achares mais simples um botão, podes trocar para conter um botão com a ação de jogar, ou
            //- até um para iniciar e um para jogar.
            //-
            //- Dependendo de como correr a aula, adicionar mais botões e reset de jogo é opção para os mais avançados
            //- ou para todos se a aula estiver a avançar bem.

            numero.setOnEditorActionListener(new TextView.OnEditorActionListener() {
                @Override
                public boolean onEditorAction(TextView v, int actionId, KeyEvent event) {
                    if(event.getAction() == KeyEvent.ACTION_DOWN)
                    {
                        jogarAdivinha();
                        return true;
                    }
                    return false;
                }
            });

            inicio = false;
            return;
        }

        String base = "Adivinhe o Número Secreto!";
        if(tentativas == 0) {
            resultado.setText("Acabaram as tentativas!");
            return;
        }

        if(numero.getText().length() > 0) {
            System.out.println("tentativas: " + tentativas);
            tentativas--;

            //- NOTA: Não conhecem as classes, esta parte terá de ser fornecida depois de explorarem um pouco
            int valor = Integer.parseInt(numero.getText().toString());
            if(valor > numeroSecreto) {
                resultado.setText(base + " - O número é inferior");
            } else if (valor < numeroSecreto) {
                resultado.setText(base + " - O número é superior");
            } else {
                resultado.setText("Parabéns! Acertou no número.");
            }
        }
    }
}
