#include <bits/stdc++.h>


using namespace std;



int main() 
{

    int n;
    int a[1001];
    cin>>n;

    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }

    int res=1000000000;
    int x=1000000000;


    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<i;j++) 
        {
            if(a[i]==a[j])
            { res=min(res, i - j);

            }
        }
    }
    if(res==x)
    { 
        res=-1;
    }
    cout<<res<<endl;
    
    return 0;
}
