
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
  string s;
  cin>>s;
  int i, count =0;
  for(i=0; i<n-1; i++)
  {
    if(s[i]==s[i+1])
    {
     count++;
    }
  }
  cout<<count;

}
