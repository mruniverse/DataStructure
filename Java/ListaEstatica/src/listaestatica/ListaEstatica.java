
package listaestatica;

/**
 *
 * @author yuril
 */
public abstract class ListaEstatica {
    public int prim;
    public int ultimo;
    
    abstract public void insere(Node n);
    abstract public void limpaLista();
    abstract public Node busca (String s);
    abstract public void remove (String s);
    abstract public void imprimeLista();
}
