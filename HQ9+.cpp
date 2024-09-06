
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0, i;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' )
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
