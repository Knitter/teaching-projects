package pt.ipleiria.estg.listgridviews;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.GridView;

public class GrelhaFotos extends AppCompatActivity {

    private GridView gvFotos;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.grelha_fotos);

        Integer[] fotos = {
                R.drawable.sample_0, R.drawable.sample_1, R.drawable.sample_2, R.drawable.sample_3,
                R.drawable.sample_4, R.drawable.sample_5
                // TODO: duplicar aleatoriamente as entradas para ter muitas imagens e provocar scroll.
        };

        StaticFotoAdapter adapter = new StaticFotoAdapter(this);
        adapter.setFotosArray(fotos);

        gvFotos = (GridView) findViewById(R.id.gvFotos);
        gvFotos.setAdapter(adapter);

        gvFotos.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            public void onItemClick(AdapterView<?> parent, View v, int position, long id) {
                Log.i("GrelhaFotos", "Selecionada imagem na posição " + position);
            }
        });

    }
}
