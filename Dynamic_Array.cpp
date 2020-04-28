#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;


int main() 
{
       
    int n,q;
    cin >>n>>q;
    vector<int>a[n];
    int lastAns = 0;
    for(int i=0;i<q;i++) 
    {
        int c, x, y;
        cin >>c>>x>>y; 
        int pos=(x^lastAns)%n;
        if(c==1) 
            {
                a[pos].push_back(y);
            }
        else if(c==2)
            {
                int index=y%((int)a[pos].size());
                lastAns=a[pos][index];
                cout<<lastAns<<endl;
            }
    }
    return 0;
}
