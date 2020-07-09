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
        int n=sc.nextInt();
        int k=sc.nextInt();
        int a[]=new int[n];
        int x[]=new int[k];
        for(int i=0;i<n;i++)
        {
            a[i] =sc.nextInt();
            x[a[i]%k]++;
        }
        int cnt=0;
        for (int i=1;i<=k/2;i++) 
        {
            if (2*i!=k) 
            {
                cnt += Math.max(x[i],x[k-i]);
            }
        }
        if (k%2==0) 
        {
            if (x[k/2]>0) 
            {
                cnt ++;
            }
        }
        if (x[0]>0) 
        {
            cnt ++;
        }
        System.out.println(cnt);
        
    }
}
