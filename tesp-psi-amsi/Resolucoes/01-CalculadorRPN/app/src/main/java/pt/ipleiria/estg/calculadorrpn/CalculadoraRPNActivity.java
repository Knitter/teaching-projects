package pt.ipleiria.estg.calculadorrpn;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

// NOTA: Existem erros no código que deverão ser encontrado através das ferramentas de debug.
// Ex.: Executar uma operação sem ter carregado no "enter" causa falha de conversão de número.
public class CalculadoraRPNActivity extends AppCompatActivity implements View.OnClickListener {

    private String temp = "";
    private int numeroOperandos = 0;
    private TextView display;

    // Numa implementação mais útil, seria usada a class Stack que permite
    // implementar uma pilha genérica
    private Integer[] pilha;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.calculadora);

        // Limite de 12 posições, 6 visíveis e 6 fora da área de valores
        pilha = new Integer[12];
        for (int i = 0; i < 12; i++) {
            pilha[i] = null;
        }

        // Remover valores exemplo/desing
        display = (TextView) findViewById(R.id.pilha);
        display.setText("");
    }

    @Override
    public void onClick(View v) {
        // Método para responder ao evento de tap dos botões, aplicado a todos os botões através da propriedade onClick
        // disponível na janela de propriedades apenas se a atividade implementar a interface View.OnClickListener
        //-

        Button btn = (Button) v;
        String texto = btn.getText().toString();

        System.out.println("onClick para botão: " + texto);

        boolean atualizarDisplay = true;
        if (texto.equalsIgnoreCase("enter")) {
            registarValorPilha();
        } else if (texto.endsWith("+")) {
            somar();
        } else if (texto.endsWith("-")) {
            subtrair();
        } else if (texto.endsWith("/")) {
            dividir();
        } else if (texto.endsWith("*")) {
            multiplicar();
        } else {
            temp += texto;
            atualizarDisplay = false;
        }

        if (atualizarDisplay) {
            atualizarDisplay();
        }
    }

    private void inserirValorPilha(int valor) {
        for (int i = 12; --i > 0; ) {
            pilha[i] = pilha[i - 1];
        }
        pilha[0] = valor;
    }

    private void somar() {
        if (numeroOperandos > 0) {
            registarResultadoOperacao(pilha[0] + pilha[1]);
        }
    }

    private void subtrair() {
        if (numeroOperandos > 0) {
            registarResultadoOperacao(pilha[0] - pilha[1]);
        }
    }

    private void multiplicar() {
        if (numeroOperandos > 0) {
            registarResultadoOperacao(pilha[0] * pilha[1]);
        }
    }

    private void dividir() {
        if (numeroOperandos > 0) {
            registarResultadoOperacao(pilha[0] / pilha[1]);
        }
    }

    private void registarValorPilha() {
        if (temp.length() > 0) {
            inserirValorPilha(Integer.parseInt(temp));
            temp = "";
            numeroOperandos++;
        }
    }

    /**
     * Método utilitário que coloca o resultado de uma operação, identificado pelo parâmetro de entrada, e coloca esse
     * valor na pilha removendo os dois valores usados como operandos da operação aritmética.
     *
     * @param valor
     */
    private void registarResultadoOperacao(int valor) {
        Integer aux[] = new Integer[12];
        for (int i = 2; i < 12; i++) {
            aux[i] = null;
        }

        for (int i = 2; i < 12; i++) {
            aux[i - 1] = pilha[i];
        }

        pilha = aux;
        pilha[0] = valor;
    }

    private void atualizarDisplay() {
        String conteudo = "";
        for (int i = 8; i-- > 0; ) {
            if (pilha[i] == null) {
                conteudo += "\n";
                continue;
            }

            conteudo += pilha[i].toString();
            if (i != 0) {
                conteudo += "\n";
            }
        }

        display.setText(conteudo);
    }

    // Exercícios de debugger e life-cycle
    @Override
    protected void onRestart() {
        super.onRestart();
        System.out.println("Aplicação onRestart.");
    }

    @Override
    protected void onStart() {
        super.onStart();

        System.out.println("Aplicação onStart.");
    }

    @Override
    protected void onResume() {
        super.onResume();

        System.out.println("Aplicação onResume");
    }

    @Override
    protected void onPause() {
        super.onPause();

        System.out.println("Apliacação onPause");
    }

    @Override
    protected void onStop() {
        super.onStop();

        System.out.println("Aplicação onStop");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();

        System.out.println("Aplicação onDestroy");
    }
}
