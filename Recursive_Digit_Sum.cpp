#include <bits/stdc++.h>
#include <iostream>

using namespace std;

vector<string> split_string(string);



int main()
{
    long int n,k;
    cin>>n>>k;
    int p=((n%9)*(k%9))%9;
    if(p==9 )
    {
        cout<<9;
        
    }    
    else {
        cout<<p<<endl;
    
    }

    return 0;
}






