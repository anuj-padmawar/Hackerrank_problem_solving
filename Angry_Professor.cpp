#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    int x;
    int n,k,xxx;

    for (int i=0;i<t;i++) 
    {
        xxx=0;
        cin >>n>>k;

        for(int i=0;i<n;i++) 
        {
            cin>>x;
            if (x<=0) 
            {
                xxx++;
            }
        }
        if (xxx<k) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
