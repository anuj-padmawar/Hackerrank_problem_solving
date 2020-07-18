import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

public static void main(String[] args) 
{
    Scanner sc=new Scanner(System.in);
    int T=sc.nextInt();
    int arr[]=new int[T];
    ArrayList<Integer>arr2 = new ArrayList<>();
        for(int i=0;i<T;i++)
        {
            arr[i]=sc.nextInt();
        }
    Arrays.sort(arr);
    int min1=arr[1]-arr[0];
    arr2.add(arr[0]);
    arr2.add(arr[1]);
    for(int k=2;k<T;k++)
    {
        int min2=arr[k]-arr[k-1];
        if(min2<min1)
        {
            arr2.clear();
            arr2.add(arr[k-1]);
            arr2.add(arr[k]);
            min1=min2;
        }
        else if(min2==min1)
        {
            arr2.add(arr[k-1]);
            arr2.add(arr[k]);
        }
    }
for (int j = 0; j < arr2.size(); j++)
{
    int value = arr2.get(j);
    System.out.print( value+" ");
}

    }
}
