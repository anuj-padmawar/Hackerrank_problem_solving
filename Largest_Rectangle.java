import java.util.Scanner;
import java.util.Stack;
public class Solution {

    public static void main(String[] args) {
        
        
        Scanner sc=new Scanner(System.in);

        int n=sc.nextInt();
        int[] h=new int[n+1];
        for (int i=0;i<n;i++) 
        {
            h[i] =sc.nextInt();
        }

        long maxArea=0;
        Stack<Integer> indices=new Stack<Integer>();
        for (int i=0;i<h.length;i++) 
        {
            while (!indices.empty() && h[i] <= h[indices.peek()]) 
            {
            int index=indices.pop();
            long area = (long)h[index] * (i-(indices.empty() ? 0:(indices.peek() + 1)));
                maxArea=Math.max(maxArea, area);
            }
            indices.push(i);
        }
        System.out.println(maxArea);
        sc.close();

    }
}
