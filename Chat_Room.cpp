
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i, x=0, count=0;
  string s;
  cin>>s;
  string a ="hello";
  for(i=0; i<s.size(); i++)
  {
      if(s[i]==a[x])
      {
          count++;
          x++;
      }
  }
  if(count==5)
  {
      cout<<"YES";
  }
  else
  {
      cout<<"NO";
  }
}
