
#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int n;
    cin>>n;
    vector<pair<int, int>>orders;

    for(int i=0;i<n;i++) 
    {
        int order_time,prep_time;
        cin>>order_time>>prep_time;
        orders.push_back({order_time+prep_time, i+1});
    }
    sort(orders.begin(),orders.end());
    for(int i=0;i<n;i++) 
    {
        cout<<orders[i].second<<" ";
    }
    return 0;
}
