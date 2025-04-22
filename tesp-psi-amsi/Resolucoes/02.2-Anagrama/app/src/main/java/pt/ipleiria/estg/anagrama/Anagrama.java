package pt.ipleiria.estg.anagrama;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageButton;
import android.widget.TextView;

public class Anagrama extends AppCompatActivity {

    private EditText palavra1;
    private EditText palavra2;
    private TextView resultado;
    private ImageButton btnReset;
    private Button btnValidar;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.anagrama);

        btnReset = (ImageButton) findViewById(R.id.ibtnClear);
        btnValidar = (Button) findViewById(R.id.btnCheck);
        palavra1 = (EditText) findViewById(R.id.etPalavra1);
        palavra2 = (EditText) findViewById(R.id.etPalavra2);
        resultado = (TextView) findViewById(R.id.tvResultado);

        btnReset.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                palavra1.setText("");
                palavra2.setText("");
            }
        });

        btnValidar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (palavra1.getText().length() > 0 && palavra2.getText().length() > 0) {
                    if (validar(palavra1.getText().toString(), palavra2.getText().toString())) {

                        //NOTA: As mensagens não são escritas directamente em código mas sim registadas no ficheiro
                        // strings.xml de modo a separar código/lógica de vista (neste caso apenas o texto) e permitir
                        // a correcta internacionalização da aplicação.
                        resultado.setText(R.string.msg_sao_anagramas);
                    } else {
                        resultado.setText(R.string.msg_nao_sao_anagramas);
                    }
                }
            }
        });
    }

    /**
     * Verifica se duas palavras são anagramas, com base na representação inteira de cada letra. A ordem das palavras
     * não é relevante.
     *
     * @param p1 Primeira palavra a usar na validação.
     * @param p2 Segunda palavra a usar na validação.
     *
     * @return Verdadeiro se as palavras são anagramas.
     */
    private boolean validar(final String p1, final String p2) {
        if (p1.length() != p2.length()) {
            return false;
        }

        int sum = 0;
        for (int i = p1.length(); i-- > 0;) {
            sum += ((int)p1.charAt(i) - (int)p2.charAt(i));
        }

        return sum == 0;
    }
}
