#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    
    vector<int> a(n);
    for (auto& e : a)
    {
        std::cin >> e;
    }
    
    sort(a.begin(),a.end());
    
    vector<int> counts(n, 1);


    for (int i=0;i<n;++i) 
    {
        for (int j=i+1;j<n;++j) 
        {
            if (abs(a[j]-a[i])<=1)
                ++counts[i];
            else
            {
                break;
            }
        }
    }
    
    cout << *std::max_element(counts.begin(),counts.end());
    
    return 0;
}
