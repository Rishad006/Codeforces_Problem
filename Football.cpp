
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int count=0, count1=0, count2=0;
   for(int i=0; i<s.size(); i++)
   {
       if(s[i]=='1')
       {
           count1++;
           count2=0;
       }
       if(s[i]=='0'){
        count2++;
        count1=0;
       }

        if(count1>=7 || count2>=7)
   {
       count=1;
   }


   }

   if(count==1)
   {
       cout<<"YES";
   }
   else{
    cout<<"NO";
   }





}
