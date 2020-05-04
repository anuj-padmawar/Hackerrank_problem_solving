#include <iostream>
using namespace std;



int main() 
{   
  int shared[51],liked[51];
  int n;
  cin >> n;
  shared[1] = 5;
  liked[1]=2;
  long long sum =liked[1];

  for (int i=2;i<=n;i++) 
  {
    shared[i]=liked[i-1]*3;
    liked[i] =shared[i]/2;
    sum +=liked[i];
  }


  cout << sum << endl;
  return 0;
}
