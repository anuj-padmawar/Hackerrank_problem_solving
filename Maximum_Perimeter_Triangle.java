import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] x = new int[n];
        for(int i = 0; i < n; i++)
        {
            x[i] = sc.nextInt();
        }
        Arrays.sort(x);
        boolean flag = true;
        for(int i=n-1;i>1;i--)
        {           
            if(x[i] < x[i-1] + x[i-2])
            {
                flag = false;
                System.out.println(x[i-2] + " " + x[i-1] + " " + x[i]);
                break;
            }
        }
        if(flag)
        {
            System.out.println("-1");
        }
    }
}
