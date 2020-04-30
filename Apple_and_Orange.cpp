#include <bits/stdc++.h>
#include<iostream>

using namespace std;

static bool between(int s, int t, int x) 
{
    return (x>=s && x<=t);
}

int main() 
{
    int s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    int acnt,ocnt,tmp;
    acnt=ocnt=0;

    while(m-->0)
     {
        cin>>tmp;
        acnt+=between(s,t,tmp+a);
    }
    while(n-->0)
    {
        cin>>tmp;
        ocnt+=between(s,t,tmp+b);
    }

    cout << acnt <<endl;
    cout<< ocnt <<endl;


    return 0;
}
