#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int q,k,t,flag=0,i=-1;
    cin>>q;
    string str[q],ch;
    while(q--)
        {
        cin>>t;
        switch(t)
            {
            case 1:
                i++;
                cin>>ch;
                if(flag==0)
                    {
                    flag=1;
                    str[i]=ch;
                    }
                else
                    {
                    
                    str[i]=str[i-1]+ch;
                    }
                break;

            case 2:
                i++;
                str[i]=str[i-1];
                cin>>k;
                str[i].erase(str[i].end()-k,str[i].end());
                break;

            case 3:
                cin>>k;
                cout<<str[i][k-1]<<endl;
                break;

            case 4:
                i--;
                if(i==-1)
                    {
                    flag=0;
                    }
            }          
        }
    return 0;
}
