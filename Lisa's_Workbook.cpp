#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,k;
    cin>>n>>k;

    int answer=0;
    int page=1;
    for(int chapter=1;chapter<=n;++chapter) 
    {
        int problems;
        cin>>problems;
        
        for(int index=1;index<=problems;++index) 
        {
            if(index==page)
                answer++;
            if(index==problems || index%k==0)
                ++page;
        }
    }
    cout<<answer<<endl;
    
    return 0;
}
