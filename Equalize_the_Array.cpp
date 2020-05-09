#include <cstring>
#include <iostream>
using namespace std;



int main() {
  int n;
  cin >>n;
  int cnt[101];
   int maxNum=0;
  memset(cnt, 0, sizeof(cnt));

  for (int i = 0; i < n; i++) 
  {
    int x;
    cin>>x;
    cnt[x]++;
  }
 


  for (int i=1;i<=100;i++)
   {
    maxNum=max(maxNum,cnt[i]);
   }

   int xxx=(n-maxNum);
   cout<<xxx<<endl;
 
  return 0;
}


