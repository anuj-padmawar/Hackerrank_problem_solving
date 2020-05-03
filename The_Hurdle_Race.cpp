#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int n,k;
    cin>>n>>k;

    int x;
    int maxh=0;

    for(int i=0;i<n;i++)
    {
       cin>>x;
       maxh=max(maxh,x);
    }

    if(maxh>k)
      { 
          cout<<(maxh-k)<<endl;
      }

    else
       {
           cout<<"0"<<endl;
       }


    

    return 0;

}
