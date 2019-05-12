package com.company;

import java.util.Scanner;
class Tree_node{ //structure of a node in a tree.
    int key;
    Tree_node left;
    Tree_node right;
    Tree_node(){

        this.key=-1;
        this.left=null;
        this.right=null;
    }
}

public class Tree {
    Scanner sc =new Scanner(System.in);
    Tree_node create_node(int key){ //creates a node.
        Tree_node temp=new Tree_node();
        temp.key=key;
        System.out.println("new key " + temp.key);
        return temp;
    }
    Tree_node Tree_creation(Tree_node temp1){
        int T,value;
        System.out.println("Enter the Value of  node\n");
        value=sc.nextInt();
        temp1=create_node(value);

        System.out.println("Do You Still want to create child\nIf yes please enter 1\n");
        T=sc.nextInt();
        if(T==1){
            temp1.left=Tree_creation(temp1.left);
            temp1.right=Tree_creation(temp1.right);
        }
        return temp1;
    }
    void Tree_Traversal(Tree_node temp2){ //traverses a tree and print the key of a node.
        if(temp2==null){
            return;
        }

        System.out.println(temp2.key + "\n");
        Tree_Traversal(temp2.left);
        Tree_Traversal(temp2.right);
        return;
    }

    public static void main(String[] args) {
        Tree t1= new Tree();
        Tree_node root =new Tree_node();
        root=t1.Tree_creation(root);
        t1.Tree_Traversal(root);
    }
}