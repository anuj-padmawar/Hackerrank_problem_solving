import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution 
{

    public static void main(String[] args) 
    {
         Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    for(int i=0;i<t;i++)
    {
        int n=sc.nextInt();
        int a=sc.nextInt();
        int b=sc.nextInt();
        if(a==b)
        {
            System.out.print((n-1)*a);
        }
        else 
        {
            if(a>b)
            {
            int temp=a;
            a=b;
            b=temp;
            }
        for(int j=0;j<n;j++)
        {
            System.out.print(j*b+(n-1-j)*a+" ");
        }
        }
        System.out.println();
    }
       
    }
}
