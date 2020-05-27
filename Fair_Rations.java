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
        int N=sc.nextInt();
        int B[]=new int[N];
        for(int i=0;i<N;i++)
        {
            B[i]=sc.nextInt();
        }
        int count=0;
        for (int i=0;i<N-1;i++) 
        {
            if (B[i]%2!=0) 
            {
                B[i+1]++;
                count+=2;
            }
        }
        if (B[N-1]%2==0) 
        {
            System.out.println(count);
        }
        else 
        {
            System.out.println("NO");
        }
    }
}


