
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int i, count =0;
  sort(s.begin(), s.end());
  for(i=0; i<s.size(); i++)
  {
    if(s[i]!=s[i+1])
    {
     count++;
    }
  }
  if(count%2==0)
  {
      cout<<"CHAT WITH HER!";
  }
  else{
    cout<<"IGNORE HIM!";
  }



}
