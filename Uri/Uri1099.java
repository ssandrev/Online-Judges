//Uri1099

import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
              int i, soma, n, j;
          Scanner dado = new Scanner(System.in);
         n = dado.nextInt();
         for(j=0;j<n;j++){
             soma = 0;
        Scanner da = new Scanner(System.in);
        int x = dado.nextInt();
        Scanner dad = new Scanner(System.in);
        int y = dado.nextInt();
        if(x<y){
        for(i=x+1;i<y;i++){
            if(i%2==1){
        soma = soma +i;}
        }}
        else{
            for(i=y+1;i<x;i++){
                if(i%2==1){
                soma = soma +i;
                }
               }    
             }
        System.out.println(soma);
    }}
 
    }