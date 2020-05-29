#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

using namespace std;


int main() 
{
int v,n,a[1000];
    cin>>v>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n;i++)
    {
        if(a[i]==v)
            cout<<i;
    }
       
    return 0;
}

