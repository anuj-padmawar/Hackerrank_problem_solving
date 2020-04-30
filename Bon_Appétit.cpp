#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n,k,bill[100000],b;
   int s=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>bill[i];
    }

    cin>>b;

    for(int i=0;i<n;i++)
    {
        if(i!=k)
        {
            s=s+bill[i];
        }
    }
    s=s/2;

    if(s==b)
    {
        cout<<"Bon Appetit"<<endl;
       
    }
    else
    {
        cout<<abs(b-s);
    }
 return 0;
}

