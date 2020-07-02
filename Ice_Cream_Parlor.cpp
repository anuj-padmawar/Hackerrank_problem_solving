#include <bits/stdc++.h>
using namespace std;

void call(vector<int>ar,int N,int M)
{
    
}
int main() {

    int T,M,N,a;
    cin >> T;

    for(int t = 1; t <= T; t++)
    {
        cin >> M >> N;
        vector<int>ar;
        for(int i = 0; i < N; i++)
        {
            cin >> a;
            ar.push_back(a);
        }
        for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            if(ar[i] + ar[j] == M)
            {
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
    }
    return 0;
}
