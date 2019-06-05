/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fde;

/**
 *
 * @author yuril
 */
public class Node {
    private Node next;
    private Node prev;
    private Aluno a;

    public Node(Node next, Node prev, Aluno a) {
        this.next = next;
        this.prev = prev;
        this.a = a;
    }

    public Node getNext() {
        return next;
    }

    public void setNext(Node next) {
        this.next = next;
    }

    public Node getPrev() {
        return prev;
    }

    public void setPrev(Node prev) {
        this.prev = prev;
    }

    public Aluno getA() {
        return a;
    }

    public void setA(Aluno a) {
        this.a = a;
    }
    
    
}