#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while (t-- > 0) 
    {
        int x,y,z;
        cin>>x>>y>>z;
        if (abs(x-z)<abs(y-z)) 
        {
            cout << "Cat A"<<endl;
        } 
        else if (abs(x-z)>abs(y-z))
        {
            cout<<"Cat B"<<endl;
        } 
        else 
        {
            cout<<"Mouse C"<<endl;
        }
    }
    return 0;
}

