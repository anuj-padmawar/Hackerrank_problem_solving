#include <bits/stdc++.h>
#include <stack>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'climbingLeaderboard' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY ranked
 *  2. INTEGER_ARRAY player
 */

int main()
{
    int n;
    cin>>n;
    int x;
    stack<int> stk;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ////cout<<x;
        if(stk.empty() || stk.top()!=x)
        {
            stk.push(x);
            //stk.top();
            
        }
    }
    
    int m;
    cin>>m;
    int y;
    for(int i=0;i<m;i++)
    {
        cin>>y;
        //cout<<y;
        while(!stk.empty() && y>=stk.top())
        {
            stk.pop();
        }
        cout<<stk.size()+1;
        cout<<endl;
    }
}



