package pt.ipleiria.estg.listgridviews;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import java.util.ArrayList;

public class ListaAlunos extends AppCompatActivity {

    private ArrayList<String> alunos;
    private ListView lvListaAlunos;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.lista_alunos);

        alunos = new ArrayList<>(24);


        ArrayAdapter<String> adapter = new ArrayAdapter<String>(this, R.layout.tv_item_aluno, alunos);

        lvListaAlunos = (ListView) findViewById(R.id.lvListaAlunos);
        lvListaAlunos.setAdapter(adapter);
    }
}
