import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.util.Scanner;

public class Solution 
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        int p=sc.nextInt();
        int d=sc.nextInt();
        int m=sc.nextInt();
        int s=sc.nextInt();
        int result=0;
        
        
        while (s>=p) 
        {
            s-=p;
            result++;
            p=Math.max(m,p-d);
        }

        System.out.println(result);

        
    }

    
}
