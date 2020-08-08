
#include<bits/stdc++.h> 
using namespace std; 

int power(int num, unsigned int n) 
{ 
    if (n==0)
    { 
        return 1; 
    }
    else if (n%2==0) 
    {
        return (power(num, n/2)*power(num, n/2)); 
    }
    else
        return (num*power(num, n/2)*power(num, n/2)); 
} 


int powerSum(int x, int n, int num=1,int sum=0) 
{ 

    int results=0; 
    int p=power(num,n); 
    while ((p+sum) < x) 
    { 
        
        results += powerSum(x,n,num+1,p+sum); 
        num++; 
        p=power(num, n); 
    } 

    if (p + sum==x) 
    {
        results++; 
    }
    return results; 
} 

int main() 
{ 
    int x,n; 
    cin>>x>>n;
    cout << powerSum(x, n); 
    return 0; 
} 

