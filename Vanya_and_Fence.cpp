
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, h, i, c1=0,c2=0, a;
  cin>>n;
  cin>>h;
  for(i=1; i<=n; i++)
  {
      cin>>a;
      if(a>h)
      {
        c2+=2;
      }
      else
      {
          c1++;
      }
  }
  cout<<c1+c2;

}
