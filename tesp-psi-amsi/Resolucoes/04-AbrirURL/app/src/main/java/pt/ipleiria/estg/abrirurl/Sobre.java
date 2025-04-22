package pt.ipleiria.estg.abrirurl;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class Sobre extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.sobre);

        TextView tvNrAberturas = (TextView)findViewById(R.id.tvNrAberturas);

        tvNrAberturas.setText("");
        int aberturas = getIntent().getIntExtra("aberturas", 0);
        if (aberturas > 0) {
            tvNrAberturas.setText("A/" + aberturas);
        }
    }
}
