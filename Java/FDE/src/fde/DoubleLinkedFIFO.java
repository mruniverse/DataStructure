/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fde;

/**
 *
 * @author CC47938751812
 */
public class DoubleLinkedFIFO {
    private Node node;
    private Node head;
    private Node tail;

    public DoubleLinkedFIFO() {
        this.node = null;
        this.head = null;
        this.tail = null;
    }
    
    public Node getNode() {
        return node;
    }

    public void setNode(Node node) {
        this.node = node;
    }

    public Node getHead() {
        return head;
    }

    public void setHead(Node head) {
        this.head = head;
    }

    public Node getTail() {
        return tail;
    }

    public void setTail(Node tail) {
        this.tail = tail;
    }
    
    public boolean isEmpty(){
        if(getTail() == null && getHead() == null){
            return true;
        }
        else return false;
    }
    
    public void insert(Aluno a){
        try {
            Node node = new Node(null, null, a);
            if(isEmpty()){
                this.head = node;
                this.tail = node;
            }
            else{
                Node aux = this.tail;
                this.tail.setNext(node);
                node.setPrev(aux);
            }
        } catch (Exception e) {
        }
    }
    
    public void print(){
        Node n = this.head;
        while(n != null){
            System.out.println("Node:" + n.getA().getName());
            n = n.getNext();
        }
    }
}
