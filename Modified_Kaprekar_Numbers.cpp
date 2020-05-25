#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {

    int count=0;
    for (long long i=p;i<=q;i++) 
    {
        long long square=i*i;
        long long square_copy=square;
        int digCount=0;
        while (square_copy) 
        {
            square_copy/=10;
            digCount++;
        }
        digCount+=digCount%2;

        long long power=10;
        for (long long k=1;k<digCount/2;k++) 
        {
            power*=10;
        }
        long long r=square%power;
        long long l=square/power;
        if (r+l==i) 
        {
            cout<<i<<" ";
          //printf("%lld ", i); 
          count++;
        }

    }

    if (count==0) 
    {
       
        cout<<"INVALID RANGE"<<endl;
    }


}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
