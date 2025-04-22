package pt.ipleiria.estg.livros.modelos;

import java.util.ArrayList;
import java.util.List;

import pt.ipleiria.estg.livros.R;

public class Dados {

    public static final Integer[] capas = {
            R.drawable.amongthieves,
            R.drawable.childrenofdune,
            R.drawable.darknessatsethanon,
            R.drawable.dune,
            R.drawable.endersgame,
            R.drawable.magician,
            R.drawable.silverthorn,
            R.drawable.starbound,
            R.drawable.talesofheresy,
            R.drawable.thebeatingofhiswings,
            R.drawable.thelastfourthings,
            R.drawable.thelefthandofgod
    };

    private static List<Livro> livros;

    public static List<Livro> getLivros() {
        if (livros == null) {
            livros = new ArrayList<>();

            // livros.add()

            livros.add(new Livro("A Darkness At Sethanon", "The Riftwar Saga, #4", "Raymond E. Feist", "2007",  "9780007229437", "An evil wind blows through Midkemia. Dark legions have risen up to crush the Kingdom of the Isles and enslave it to dire magics. The final battle between Order and Chaos is about to begin in the ruins of the city called Sethanon.", 0.0f));
            livros.add(new Livro("Silverthorn", "The Riftwar Saga, #3", "Raymond E. Feist", "2008", "9780007229420", "For nearly a year peace has reigned in the Kingdom of the Isles, but mischief is stirring again in the city of Krondor and new challenges await Prince Arutha when Jimmy the Hand - the youngest thief in the Guild of Mockers - stumbles upon a sinister Nighthawk poised to assassinate him.", 0.0f));
        }

        return livros;
    }
}
