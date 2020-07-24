import java.io.*;
import java.util.*;

public class Solution 
{
    public static void main(String[] args) 
    {
        
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        long[] prices=new long[n];
        HashMap<Long,Integer>indices=new HashMap<>();

    
        for(int i=0;i<n;i++)
        {
            prices[i]=sc.nextLong();
            indices.put(prices[i],i);
        }

        Arrays.sort(prices);

        Long minimumLoss=Long.MAX_VALUE;

        
        for(int i=n-1;i>0;i--)
        {
            
            if(prices[i]-prices[i-1] < minimumLoss)
            {
                
                if(indices.get(prices[i]) < indices.get(prices[i-1]))
                {
                    minimumLoss = prices[i]-prices[i-1];
                }
            }
        }

        System.out.println(minimumLoss);

    }
}
