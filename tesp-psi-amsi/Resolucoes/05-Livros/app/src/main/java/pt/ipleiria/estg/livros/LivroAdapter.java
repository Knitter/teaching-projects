package pt.ipleiria.estg.livros;

import java.util.List;

import android.content.Context;
import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.TextView;

import pt.ipleiria.estg.livros.modelos.Dados;
import pt.ipleiria.estg.livros.modelos.Livro;

public class LivroAdapter extends BaseAdapter {

    private Context context;
    private LayoutInflater inflater;
    private List<Livro> livros;

    public LivroAdapter(Context context, List<Livro> livros) {
        this.context = context;
        this.livros = livros;
    }

    @Override
    public int getCount() {
        return livros.size();
    }

    @Override
    public Object getItem(int position) {
        return livros.get(position);
    }

    @Override
    public long getItemId(int position) {
        return position;
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {

        if (inflater == null) {
            inflater = (LayoutInflater) context.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
        }

        if (convertView == null) {
            convertView = inflater.inflate(R.layout.item_lista_livro, null);
        }

        ImageView capa = (ImageView) convertView.findViewById(R.id.ivItemCover);
        TextView titulo = (TextView) convertView.findViewById(R.id.tvItemTituloLivro);
        TextView autor = (TextView) convertView.findViewById(R.id.tvItemAutor);
        TextView classificacao = (TextView) convertView.findViewById(R.id.tvItemClassificacao);
        TextView ano = (TextView) convertView.findViewById(R.id.tvItemAno);

        Livro livro = livros.get(position);
        titulo.setText(livro.getTitulo());
        autor.setText(livro.getAutor());
        classificacao.setText("R: " + livro.getClassificacao());

        capa.setImageResource(Dados.capas[position]);

        return convertView;
    }

}
