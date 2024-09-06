#include<iostream>
#include<cctype>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int i, count =0, count1=0;
  for(i=0; i<s.size(); i++)
  {
      if(s[i]>=97)
      {
          count++;
      }
      else{
        count1++;
      }
  }
  for(i=0; i<s.size(); i++)
  {
      char ch;
     if(count>=count1)
  {
      ch = tolower(s[i]) ;
      cout<<ch;
  }
  else
  {
      ch = toupper(s[i]);
      cout<<ch;
  }

  }


}
