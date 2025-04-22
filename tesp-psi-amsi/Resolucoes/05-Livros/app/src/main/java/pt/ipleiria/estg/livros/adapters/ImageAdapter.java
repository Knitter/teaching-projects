package pt.ipleiria.estg.livros.adapters;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;

import java.util.List;

import pt.ipleiria.estg.livros.R;
import pt.ipleiria.estg.livros.modelos.Livro;

public class ImageAdapter extends BaseAdapter {

    private Context actividade;
    private List<Livro> livros;

    public ImageAdapter(Context actividade, List<Livro> livros) {
        this.actividade = actividade;
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
    public View getView(int position, View convertView,
                        ViewGroup parent) {

        LayoutInflater inflater = (LayoutInflater) actividade
                .getSystemService(Context.LAYOUT_INFLATER_SERVICE);

        convertView = inflater.inflate(R.layout.item_lista_livro, null);
        TextView tvTitle = (TextView) convertView.findViewById(R.id.tvItemTituloLivro);
        tvTitle.setText(livros.get(position).getTitulo());

        return convertView;
    }
}
