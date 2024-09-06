
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int v, sum, i , j;
  for(i=1; i<=5; i++)
  {
      for(j=1; j<=5; j++)
      {
          cin>>v;
          if(v==1)
          {
              sum=abs(3-i)+abs(3-j);
          }
      }
  }
  cout<<sum;
}
