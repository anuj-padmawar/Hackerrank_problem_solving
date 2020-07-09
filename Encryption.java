import java.io.*;
import java.util.*;
import java.lang.Math;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read sc from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        
        String sentence=sc.nextLine();
        int rows=(int)Math.sqrt(sentence.length());

        int columns=(sentence.length() > rows*rows) ? rows+1 : rows;
        rows=(sentence.length() > rows*columns) ? rows+1 : rows;
        
    
        for(int i = 0; i < columns; i++)
        {
           
            int currentIndex=i;
            for(int j=0;j<rows;j++)
            {
                if(currentIndex <= sentence.length()-1)
                {
                    System.out.print(sentence.charAt(currentIndex));
                }
                currentIndex +=columns;
            }
            if(i+1 != columns) 
            {
                System.out.print(" ");
            }
        }
        
    }
}
