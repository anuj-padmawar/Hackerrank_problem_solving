#include <iostream>
using namespace std;



int main()
{
  int n,k;
  int c[25];
  int energy=100,pos=0;
  cin>>n>>k;

  for (int i=0;i<n;i++) 
  {
    cin>>c[i];
  }

  
  do 
  {
    pos=((pos+k)%n);
    energy--;

    if (c[pos]==1) 
    {
      energy-=2;
    }

  }while(pos!=0);


  cout<<energy<<endl;


  return 0;
}
