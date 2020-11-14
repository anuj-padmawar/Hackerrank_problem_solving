#include <bits/stdc++.h>
using namespace std ;
long long int ans1[100001],ans2[100001] ;
int main()
{
int query; 
cin>>query ; 
ans1[0]=0,ans2[0]=0;

for(int i=1;i<=100000;++i)
{    
    ans1[i]=i^ans1[i-1];
    ans2[i]=ans1[i]^ans2[i-1] ;
}
int left,right;  

while(query--)
{
    cin>>left>>right ;
    long long int pika=ans2[right]^ans2[left-1];
    cout<<pika<<endl;
}
return 0;

}
