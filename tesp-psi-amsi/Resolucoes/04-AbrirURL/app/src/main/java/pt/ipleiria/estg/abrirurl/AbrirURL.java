package pt.ipleiria.estg.abrirurl;

import android.content.Intent;
import android.media.Image;
import android.net.Uri;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageButton;

public class AbrirURL extends AppCompatActivity {

    private EditText etURL;
    private int nrAberturas;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.abrir_url);

        etURL = (EditText)findViewById(R.id.etURL);
        etURL.setText("");

        nrAberturas = 0;

        Button btnAbrir = (Button) findViewById(R.id.btnAbrir);
        btnAbrir.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                Log.i(this.getClass().getSimpleName(), "Click para iniciar intent de INTERNET");

                String url = etURL.getText().toString();
                if (url.length() > 0) {
                    Intent intent = new Intent(Intent.ACTION_VIEW, Uri.parse(url));
                    startActivity(intent);
                }
            }
        });

        ImageButton ibSobre = (ImageButton) findViewById(R.id.ibSobre);
        ibSobre.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                Log.i(this.getClass().getSimpleName(), "Click para iniciar intent de atividade Sobre");

                nrAberturas++;
                Log.i(this.getClass().getSimpleName(), "N/Aberturas: " + nrAberturas);

                Intent intent = new Intent("pt.ipleiria.estg.SOBRE");
                intent.putExtra("aberturas", nrAberturas);

                startActivity(intent);
            }
        });
    }
}
