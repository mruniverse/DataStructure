
package listaestatica;

/**
 *
 * @author yuril
 */
public class Lista extends ListaEstatica{
    private Node<String>[] node;
    private int size;

    public Lista() {
        this.node = new Node[10];
        this.size = 0;
    }

    public Node<String>[] getNode() {
        return node;
    }

    public void setNode(Node<String>[] node) {
        this.node = node;
    }

    public int getSize() {
        return size;
    }

    public void setSize(int size) {
        this.size = size;
    }

    public int getPrim() {
        return prim;
    }

    public void setPrim(int prim) {
        this.prim = prim;
    }

    public int getUltimo() {
        return ultimo;
    }

    public void setUltimo(int ultimo) {
        this.ultimo = ultimo;
    }
    
    
    public static void main(String[] args) {        
        Lista l = new Lista();
        Node<String> n = new Node("teste1");
        Node<String> newNode = new Node("oie");
        
//        n[2].setData("oie");
        
        l.insere(newNode);
        l.insere(n);
        l.insere(newNode);
        l.insere(n);
        l.insere(newNode);
        l.insere(n);
        l.insere(newNode);
        l.insere(n);
        l.insere(newNode);
        l.insere(n);
        l.insere(newNode);
        l.insere(n);
        
        l.imprimeLista();
        l.limpaLista();
        l.imprimeLista();
        
    }
    
    
    
//    Methods ==================================================================
    public boolean cheia(){
        return this.node.length == this.size;
    } 
    
    public boolean vazia(){
        return this.size == 0;
    }
    
    @Override
    public void insere(Node n) {
        if(!cheia()){
            for (int i = 0; i < this.node.length; i++) {
                if(this.node[i] == null){
                    this.node[i] = n;
                    this.size++;
                    return;
                }
            }
        }
        else{
            System.out.println("Lista cheia!");
        }
    }

    @Override
    public void limpaLista() {
        for (int i = 0; i < this.node.length; i++) {
               this.node[i] = null;
               this.size--;
        }
    }

    @Override
    public Node busca(String s) {
        for (int i = 0; i < this.size; i++) {
            if(this.node[i].getData() == s){
                return this.node[i];
            }
            else{
                return null;
            }
        }
        
        return null;
    }

    @Override
    public void remove(String s) {
        for (int i = 0; i < this.size; i++) {
            if(this.node[i].getData() == s){
               this.node[i] = null;
            }
            else{
                System.out.println("String não encontrada!"); 
           }
        }        
    }

    @Override
    public void imprimeLista() {
//        System.out.println(size);
//        System.out.println(node.length); 
        if(!vazia()){
            for (int i = 0; i < this.size; i++) {
                   System.out.println(this.node[i].getData());
            }
        }
        else{
            System.out.println("Lista Vazia!");
        }
    }
//    End of Methods ===========================================================
    
    
}
