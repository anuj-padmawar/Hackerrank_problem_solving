import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;


public class Petrol 
{ 
    
    static class petrolPump 
    { 
        int petrol; 
        int distance; 
        
        public petrolPump(int petrol, int distance) 
        { 
            this.petrol = petrol; 
            this.distance = distance; 
        } 
    } 
    
    static int printTour(petrolPump arr[], int n) 
    { 
        int start=0; 
        int end=1; 
        int curr_petrol=arr[start].petrol - arr[start].distance; 
    
        while(end != start || curr_petrol < 0) 
        { 
            while(curr_petrol < 0 && start != end) 
            { 
                curr_petrol -=arr[start].petrol - arr[start].distance; 
                start=(start+1)%n; 
                
                if(start==0) 
                    return -1; 
            } 
    
            curr_petrol+=arr[end].petrol-arr[end].distance; 
            
            end=(end+1)%n; 
        } 
        return start; 
    } 
    
    public static void main(String[] args) 
    { 

    Scanner sc = new Scanner(System.in);
    int n=sc.nextInt();

        
        petrolPump[] arr=new petrolPump[n];  
        for(int i=0;i<n;i++)
        {
            int x=sc.nextInt();
            int y=sc.nextInt();
            arr[i]=new petrolPump(x,y); 
        }
        
        int start = printTour(arr, arr.length); 
        
        System.out.println(start); 

    } 

} 



