package pt.ipleiria.estg.livros;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.GridView;

import pt.ipleiria.estg.livros.modelos.Dados;

public class Galeria extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.ac_galeria);

        GridView gvGaleria = (GridView) findViewById(R.id.gvGaleria);
        gvGaleria.setAdapter(new ImagemAdapter(this, Dados.capas));

        gvGaleria.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            public void onItemClick(AdapterView<?> parent, View v, int position, long id) {
                Log.i("GrelhaFotos", "Selecionada imagem na posição " + position);
            }
        });

    }
}
