
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            if(i==n)
            {
                cout<<"I love it";
                break;
            }
            cout<<"I love that"<<" ";
        }
        else
        {
            if(i==n)
            {
                cout<<"I hate it";
                break;
            }
            cout<<"I hate that"<<" ";
        }
    }
}
