package pt.ipleiria.estg.livros;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.GridView;
import android.widget.ImageView;

public class ImagemAdapter extends BaseAdapter {

    private Context context;
    private Integer[] imagens;

    public ImagemAdapter(Context context, Integer[] imagens) {
        this.context = context;
        this.imagens = imagens;
    }

    public int getCount() {
        return (imagens != null ? imagens.length : 0);
    }

    public Object getItem(int position) {
        return null;
    }

    public long getItemId(int position) {
        return 0;
    }

    public View getView(int position, View convertView, ViewGroup parent) {
        ImageView iv;

        if (convertView == null) {
            iv = new ImageView(context);

            iv.setLayoutParams(new GridView.LayoutParams(170, 285));
            iv.setScaleType(ImageView.ScaleType.CENTER_CROP);
            iv.setPadding(8, 8, 8, 8);
        } else {
            iv = (ImageView) convertView;
        }

        iv.setImageResource(imagens[position]);
        return iv;
    }

}
