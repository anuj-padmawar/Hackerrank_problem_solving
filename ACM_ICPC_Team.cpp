#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    vector <string> topic;
    int n,m;
    cin >> n >> m;
    string s;
    for (int i= 0; i < n; i++ ) 
    {
        cin >> s;
        topic.push_back(s);
    }

    int ans=0;
    int cnt=0;
    
    for (int i=0;i<n-1;i++ ) 
    {
        for (int j=i+1;j<n;j++) 
        {
            int val=0;
            for (int k=0;k<m;k++ ) 
            {
                if ( topic[i][k]=='1' || topic[j][k]=='1' ) 
                val++;
            }
            if (ans<val) 
            {
                ans = val;
                cnt = 1;
            }
            else if ( ans==val ) 
            {
                cnt++;
            }
        }
    }

    cout<<ans<<endl;
    cout<<cnt<<endl;


    return 0;
}
