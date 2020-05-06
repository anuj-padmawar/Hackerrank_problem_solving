import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
       
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int t=sc.nextInt();
        int[] widths = new int[n];
        
        for(int i=0;i<n;i++)
        {
            widths[i]=sc.nextInt();
        }
        
        for(int x=0;x<t;x++)
        {
            int i=sc.nextInt();
            int j=sc.nextInt();
            int vehicleSize=3; 
            
            while(i<=j)
            {
                if(vehicleSize>widths[i])
                {
                    vehicleSize=widths[i];
                }
                i++;
            }
            System.out.println(vehicleSize);
        }
    }
}
