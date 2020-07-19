#include <set>
#include <string>
#include <iostream>
using namespace std;
static int weight(const char& c) 
{
    return c - 'a' + 1;
}

int main()
{    
    string str;
    cin>>str;  
    set<int> values;
    for (int i=0,j;i<str.length();i=j) 
    {
        char last=str[i];
        int last_w=0;

        for (j=i;j<str.length() && str[j]==last;++j) 
        {
            last_w += weight(last);
            values.insert(last_w);
        }
    }   
    int q, tmp;
    cin>>q;

    while (q-- >0) 
    {
        cin>>tmp;
        cout<<(values.find(tmp) == values.end() ? "No" : "Yes") << '\n';
    }
    
    return 0;
}


