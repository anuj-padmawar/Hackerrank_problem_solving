#include <bits/stdc++.h>

using namespace std;

int main() 
{
 int t; 
 cin>>t;
 while( t--) 
 {
      int n;
      cin >> n;
      long long row[n], col[n];
      int i,j;
      for(i=0;i<n;i++) 
      {
          row[i] = col[i] = 0;
      }
      for(i=0;i<n;i++ ) 
      {
           for(j=0;j<n;j++) 
           {
                int x; cin >> x;
                row[i] += x; col[j] += x;
           }
       }
       sort(row,row+n);
       sort(col,col+n);
       bool x=true;
       for(i=0;i<n;i++) 
       {
           if(row[i] != col[i]) 
           {
              x=false;
              break;
           }
       }
       if(x==true)
       {
           cout<<"Possible"<<endl;
       }
       else
       {
           cout<<"Impossible"<<endl;
       }
 }
 return 0;
}

