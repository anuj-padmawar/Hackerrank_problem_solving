
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    
    int n, k, q;
    cin>>n>>k>>q;
    int arr[n];
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    k=k%n;

    for(int i=0;i<q;i++) 
    {
        int x;
        cin>>x;
        cout<<arr[(n-k+x)%n]<<endl; 
    }
    return 0;
}
