package pt.ipleiria.estg.livros.modelos;

public class Livro {

    private String titulo;
    private String serie;
    private String autor;
    private String ano;
    private String isbn13;
    private String sinopse;
    private float classificacao;

    public Livro(String titulo, String serie, String autor, String ano, String isbn13, String sinopse, float classificacao) {
        this.titulo = titulo;
        this.serie = serie;
        this.autor = autor;
        this.ano = ano;
        this.isbn13 = isbn13;
        this.sinopse = sinopse;
        this.classificacao = classificacao;
    }

    public Livro(String titulo, String autor) {
        this(titulo, null, autor, null, null, null, 0.0f);
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getSerie() {
        return serie;
    }

    public void setSerie(String serie) {
        this.serie = serie;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getAno() {
        return ano;
    }

    public void setAno(String ano) {
        this.ano = ano;
    }

    public float getClassificacao() {
        return classificacao;
    }

    public void setClassificacao(float classificacao) {
        this.classificacao = classificacao;
    }

    public String getIsbn13() {
        return isbn13;
    }

    public void setIsbn13(String isbn13) {
        this.isbn13 = isbn13;
    }

    public String getSinopse() {
        return sinopse;
    }

    public void setSinopse(String sinopse) {
        this.sinopse = sinopse;
    }

    @Override
    public String toString() {
        return titulo;
    }

}
