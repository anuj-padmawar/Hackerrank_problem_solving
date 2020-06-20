#include <bits/stdc++.h>

using namespace std;


int main()
{

int N, K, price;
cin >> N >> K;
int totalAmount = 0;
priority_queue<int> prices;

for(int i=0;i<N;i++)
{
    cin>>price;
    prices.push(price);
}


for (int j=0;j<N;++j) 
{
    totalAmount += ((j/K+1) * prices.top());
    prices.pop();
}

cout << totalAmount <<endl;
return 0;

}

