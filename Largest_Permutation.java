import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

import java.util.Scanner;

public class HelloWorld {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
                
        int n=sc.nextInt();
        int arr[]=new int[n];
        int k=sc.nextInt();
        //System.out.println("n:"+n +" k:" +k);  
        int arr2[]=new int[n+1];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
            arr2[arr[i]]=i;
        }
        
        
          for(int i=0;i<n && k>0;i++)
          {
            if(arr[i]==n-i)   // when number is already in place
               continue;
            arr[arr2[n-i]]=arr[i];    // swapping element
            arr2[arr[i]]=arr2[n-i];   //swapping index
            arr2[n-i]=i;               // swapping index
            arr[i]=n-i;                //  swapping array element
            k--;
        }
        
        for(int i=0;i<n;i++)
        {
          System.out.print(arr[i]+" ");  
        }
        
    }
}

