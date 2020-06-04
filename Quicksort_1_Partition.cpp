#include <bits/stdc++.h>

using namespace std;

void partition(vector <int>  ar) 
{
   int p=ar[0];
    vector <int> l, r;
    for(int i=0;i<ar.size();i++) 
    {
        int x=ar[i];
       if (p>ar[i])
        l.push_back(x); 
        else if(p<ar[i])
        r.push_back(x); 
    }
    if(!l.empty())
    {
    for(int x=0;x!=l.size();x++)
    {
        cout<<l[x]<<" ";
    }
    }
        cout<<p<<" ";
     for(int x=0;x!=r.size();x++)
     {
    cout<<r[x]<<" ";
     }
    
}
int main() 
{
   vector <int> ar;
   int size;
   cin >>size;
    
     for(int i=0;i<size;i++) 
     {
        int tmp;
        cin>>tmp;
        ar.push_back(tmp); 
    }

   partition(ar);
   
   return 0;
}
