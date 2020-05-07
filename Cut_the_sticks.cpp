#include <bits/stdc++.h>
#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
      
    int n;
    cin>>n;
    int x[n];
    for (int i=0;i<n;i++) 
    {
        cin>>x[i];
    }
    sort(x,x+n); 
    int remain=n;

    cout<<remain<<endl;

    int min=x[0];
    for (int i=1;i<n;i++) 
    {
        if (x[i]!=min) 
        {
            min=x[i];
            remain=n-i;
            cout <<remain<<endl;
        }
    }

    return 0;
}


