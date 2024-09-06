
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s, s2;
    cin>>s;

            for(int i=0; i<s.size(); i++)
            {
                if(s[i]<=92)
                {
                    s[i] = s[i]+32;
                }
            }

        for(int i=0; i<s.size(); i++)
        {

            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i] == 'o' || s[i]=='u'||s[i]=='y')
            {
                continue;
            }


            else
            {
               s2+='.';
               s2+= s[i];
            }
        }
        cout<<s2<<endl;



}
