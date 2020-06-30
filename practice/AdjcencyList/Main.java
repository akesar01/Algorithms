package com.ankit;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    private static void addEdge(ArrayList<ArrayList<Integer>> adj,int src,int dest){
        adj.get(src).add(dest);
        adj.get(dest).add(src);

    }
    private static void printEdge(ArrayList<ArrayList<Integer> > adj){
        for(int i=0;i<adj.size();i++){
            System.out.print("head "+i);
            for(int j=0;j<adj.get(i).size();j++){
                System.out.print(" --> "+adj.get(i).get(j));

            }
            System.out.println();
        }


    }
private static Scanner s = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.println("Enter the number of Vertices");
        int V = s.nextInt();
        ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>(V) ;
        for (int i=0;i<V;i++){
            adj.add(new ArrayList<Integer>());
        }
        boolean quit = true;
        while(quit) {
            System.out.println("1)Enter the edge in graph");
            System.out.println("2)quit");
            System.out.println("3)Print");
            int choice = s.nextInt();
            if(choice==1){
            System.out.println("Add the source and the destination");
            System.out.println("Enter source");
            int src = s.nextInt();
            System.out.println("Enter destination");
            int dest = s.nextInt();
            addEdge(adj,src,dest);
            }
            else if(choice==2){
                quit = false;
                System.out.println("Exiting...");
            }
            else{
                printEdge(adj);
            }

	    }

    }
}

