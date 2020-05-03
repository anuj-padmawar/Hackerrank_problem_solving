import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution
{

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=26;
        int max=0;
        int h[] = new int[n];

        for (int i=0;i<n;i++)
        {
            h[i] = sc.nextInt();
        }
        String str=sc.next();
        int l=str.length();
        

        for (int i=0;i<l;i++)
        {
            char temp = str.charAt(i);
            max=max<h[temp-97] ? h[temp-97] : max;
        }
        int result=(max*l);

        System.out.println(result);

    }
}
