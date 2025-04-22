package pt.ipleiria.estg.listgridviews;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.GridView;
import android.widget.ImageView;

public class StaticFotoAdapter extends BaseAdapter {

    private Context mContext;
    private Integer[] fotos;

    public StaticFotoAdapter(Context c) {
        mContext = c;
    }

    public int getCount() {
        return (fotos != null ? fotos.length: 0);
    }

    public Object getItem(int position) {
        return null;
    }

    public long getItemId(int position) {
        return 0;
    }

    public void setFotosArray(Integer[] fotos) {
        this.fotos = fotos;
    }

    public View getView(int position, View convertView, ViewGroup parent) {
        ImageView imageView;

        // verificar se estamos a reciclar a view ou não.
        if (convertView == null) {
            imageView = new ImageView(mContext);
            // configurar parâmetros de layout, tal como se faria usando XML
            imageView.setLayoutParams(new GridView.LayoutParams(85, 85));
            imageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
            imageView.setPadding(8, 8, 8, 8);
        } else {
            imageView = (ImageView) convertView;
        }

        imageView.setImageResource(fotos[position]);
        return imageView;
    }

}
