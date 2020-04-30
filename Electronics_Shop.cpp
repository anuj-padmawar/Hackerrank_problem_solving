#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int b,n,m,a;
    int res=-1;
    int keyboard[1001],usb[1001];

    cin >>b>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>keyboard[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>usb[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(keyboard[i]+usb[j] <=b)
            {
            res=max(res,keyboard[i]+usb[j]);
            }
        }
    }
    cout<<res<<endl;
    return 0;
}

