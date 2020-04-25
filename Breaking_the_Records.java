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
        int n = sc.nextInt();
        
        int high =sc.nextInt();
        int low = high;
        int h=0;
        int l=0;
        
        for(int score=1; score<n;score++)
        {
            int x=sc.nextInt();
            
            if(x>high){
                high=x;
                h++;
            }
            
            if(x<low){
                low=x;
                l++;
            }
        }
        System.out.println(h+ " " +l);
    }
}
