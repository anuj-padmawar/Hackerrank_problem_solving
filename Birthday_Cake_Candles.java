#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    scanf("%d",&n);
    int highest=-1, cnt=0;
    for (int i=0;i<n;i++)
    {
        int h;

        scanf("%d",&h);

        if (h>highest)
        {
            highest = h;
            cnt=1;
        }
        else if (h==highest)
        {
            cnt ++;
        }
    }
    printf("%d\n", cnt);
}
