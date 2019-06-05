/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fde; //FDE stands for: Fila Duplamente Encadada

public class FDE {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        DoubleLinkedFIFO fifo = new DoubleLinkedFIFO();
        Aluno a = new Aluno("Matematica", "Alfredinho", 109283, 10);
        Aluno b = new Aluno("Matematica", "Godofredo", 109283, 10);

        fifo.insert(a);
        fifo.insert(b);
        fifo.print();
        
    }
    
}
