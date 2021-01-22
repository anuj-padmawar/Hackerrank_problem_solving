#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
void dfs(vector<int> graph[],bool arr[], int z)
{
    arr[z]=true;
    for(int i=0;i<graph[z].size();i++)
    {
        if(arr[graph[z][i]] == false)
        {
            dfs(graph,arr,graph[z][i]);
        }
}
}


int main()
{
    int q;
    cin>>q;
    for(int loop=0;loop<q;loop++)
    {
        int n,m;
        long c_road,c_lib;
        cin>>n>>m>>c_road>>c_lib;
        vector<int> graph[n];
        bool arr[n];
        for(int i=0;i<m;i++)
        {
            int ver1,ver2;
            cin>>ver1>>ver2;
            graph[ver1-1].push_back(ver2-1);
            graph[ver2-1].push_back(ver1-1);
        }
        for (int i=0; i<n; i++)
        {
        arr[i]=false;
        }
        int xxx=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==false)
            {
                dfs(graph,arr,i);
                xxx++;
            }
        }
        long int ans =xxx*c_road;
        ans += ((c_road < c_lib) ? c_road : c_lib)*(n-xxx);
        cout<<ans<<endl;
    }
    return 0;
}

