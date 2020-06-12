import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
       String[] numberWords = new String[] {
"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
        
        Scanner in = new Scanner(System.in);
        int h=in.nextInt();
        int m=in.nextInt();
        
        int nextHour=(h%12)+1;
        
        if(m==0) 
        {
            System.out.printf("%s o' clock\n", numberWords[h]);
        }

        if(m==1 && h==1) 
        {
            System.out.printf("one minute past one\n");
        }
        
        else if(m==15) 
        {
            System.out.printf("quarter past %s\n", numberWords[h]);
        }
        
        else if(m==30) 
        {
            System.out.printf("half past %s\n", numberWords[h]);
        }
        
        else if(m==45) 
        {
            System.out.printf("quarter to %s\n", numberWords[nextHour]);
        }
        
        else if(m<30) 
        {
            System.out.printf("%s minutes past %s\n",numberWords[m],numberWords[h]);
        }
        
        else 
        {
            System.out.printf("%s minutes to %s\n", numberWords[60-m], numberWords[nextHour]);
        }
    }
}
