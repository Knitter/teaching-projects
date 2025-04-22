package pt.ipleiria.estg.livros;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.ListView;

import pt.ipleiria.estg.livros.modelos.Dados;

public class ListaLivros extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.ac_lista_livros);

        ListView lvListaLivros = (ListView) findViewById(R.id.lvListaLivros);
        lvListaLivros.setAdapter(new LivroAdapter(this, Dados.getLivros()));
    }
}
