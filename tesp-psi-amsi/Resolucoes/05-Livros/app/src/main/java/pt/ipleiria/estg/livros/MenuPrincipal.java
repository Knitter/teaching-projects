package pt.ipleiria.estg.livros;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageButton;

public class MenuPrincipal extends AppCompatActivity {

    private static final String ID_AC_LISTA_LIVROS = "pt.ipleiria.estg.livros.LISTA";
    private static final String ID_AC_GALERIA = "pt.ipleiria.estg.livros.GALERIA";
    private static final String ID_AC_ADICIONAR_LIVRO = "pt.ipleiria.estg.livros.ADICIONAR";
    private static final String ID_AC_SOBRE = "pt.ipleiria.estg.livros.SOBRE";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.ac_menu_principal);

        Button btnListaLivros = (Button) findViewById(R.id.btnListaLivros);
        btnListaLivros.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                Intent i = new Intent(ID_AC_LISTA_LIVROS);
                startActivity(i);
            }
        });

        Button btnGaleria = (Button) findViewById(R.id.btnGaleria);
        btnGaleria.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                Intent i = new Intent(ID_AC_GALERIA);
                startActivity(i);
            }
        });

        Button btnAdicionar = (Button) findViewById(R.id.btnAdicionarLivro);
        btnAdicionar.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                Intent i = new Intent(ID_AC_ADICIONAR_LIVRO);
                startActivity(i);
            }
        });

        ImageButton ibSobre = (ImageButton) findViewById(R.id.ibSobre);
        ibSobre.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                Intent i = new Intent(ID_AC_SOBRE);
                startActivity(i);
            }
        });
    }
}
