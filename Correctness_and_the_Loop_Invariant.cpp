#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 


    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++) 
    {
        scanf("%d", &arr[i]);
    }

    int key,j;  
    for (int i=1;i<N;i++) 
    {  
        key=arr[i];  
        j=i-1;  
  
        while (j>=0 && arr[j]>key) 
        {  
            arr[j+1]=arr[j];  
            j=j-1;  
        }  
        arr[j+1]=key;  
    }
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }    
    return 0;
}

