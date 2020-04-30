#include <bits/stdc++.h>
#include<iostream>

using namespace std;



int main()
{
    
    int n,p;
    cin >>n>>p;
    int x=(n+2)/2;
    int y=(p+2)/2;
    
   
    
    int front=y-1;
    int back=x-front-1;
    
    cout<<min(front,back)<<endl;
    
    return 0;
}

