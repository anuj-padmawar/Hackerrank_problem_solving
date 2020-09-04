import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;



public class Solution {
    public static void main(String[] args) throws IOException 
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n=sc.nextInt();
            int max=0;
            int count=0;
            for (int i = 0; i < n; i++) 
            {
                int number = sc.nextInt();
                if (max<number) 
                {
                    max=number;
                    count++;
                }
            }
            System.out.println(count % 2 == 0 ? "ANDY" : "BOB");
        }
    }
}

