package pt.ipleiria.estg.linearlayoutandwidgets;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CheckedTextView;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RatingBar;
import android.widget.Spinner;
import android.widget.Switch;
import android.widget.ToggleButton;

public class Widgets extends AppCompatActivity {

    private EditText logTxt;
    private  Button btnLog;
    private ToggleButton btnToggle;
    private CheckBox check;
    private RadioButton radio1;
    private RadioButton radio2;
    private Switch swtOnOff;
    private Spinner spin;
    private RatingBar star;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.widgets);

        logTxt = (EditText) findViewById(R.id.logTxt);
        btnToggle = (ToggleButton) findViewById(R.id.btnToggleLigado);
        check = (CheckBox) findViewById(R.id.chkCheck);
        radio1 = (RadioButton) findViewById(R.id.rdRadio1);
        radio2 = (RadioButton) findViewById(R.id.rdRadio2);
        swtOnOff = (Switch) findViewById(R.id.swtOnOff);
        spin = (Spinner) findViewById(R.id.spnPlanetas);
        star = (RatingBar) findViewById(R.id.starRating);

        btnLog = (Button) findViewById(R.id.btnLog);
        btnLog.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Log.e("ERRO", logTxt.getText().toString());
                Log.v("SIMPLES", logTxt.getText().toString());
                Log.d("DEBUG", logTxt.getText().toString());
                Log.i("INFO", logTxt.getText().toString());
                Log.w("WARNING", logTxt.getText().toString());
            }
        });

        btnToggle.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Log.d("TOOGLESTATE", btnToggle.isChecked() ? "Ligado" : "Desligado");
            }
        });

        check.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Log.d("CHECKSTATE", check.isChecked() ? "Seleccionado": "Deseleccionado");
            }
        });

        View.OnClickListener radioListener = new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(radio1.isChecked()) {
                    Log.d("RADIOCHECK", "Radio 1 activo");
                } else if(radio2.isChecked()) {
                    Log.d("RADIOCHECK", "Radio 2 activo");
                } else {
                    Log.d("RADIOCHECK", "Nenhum radio activo");
                }
            }
        };

        radio1.setOnClickListener(radioListener);
        radio2.setOnClickListener(radioListener);

        swtOnOff.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Log.d("SWITCHSTATE", swtOnOff.isChecked() ? "Ligado" : "Desligado");
            }
        });

        spin.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> parent, View view, int position, long id) {
                Log.d("SPINNERSTATE", spin.getSelectedItem().toString());
            }

            @Override
            public void onNothingSelected(AdapterView<?> parent) {
                Log.d("SPINNERSTATE", "Fechado sem selecção");
            }
        });

        star.setOnRatingBarChangeListener(new RatingBar.OnRatingBarChangeListener() {
            @Override
            public void onRatingChanged(RatingBar ratingBar, float rating, boolean fromUser) {
                Log.d("STARSTATE", "Rating: " + star.getRating());
            }
        });
    }
}
