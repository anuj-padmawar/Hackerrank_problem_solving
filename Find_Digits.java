import java.io.*;
import java.util.*;

public class Solution 

{

    public static void main(String[] args) 
    {
       
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        
        for(int i=0;i<t;i++)
        {
            String str=String.valueOf(sc.nextInt());
            int num=Integer.parseInt(str);

            int count=0;
            
            for(int j=0;j<str.length();j++)
            {
                int digit=Character.getNumericValue(str.charAt(j));
                
                if(digit!=0 && (num%digit)==0)
                {
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}
