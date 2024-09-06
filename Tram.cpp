
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, sum=0, count=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        sum = (a+count)-b;
        if(sum<0)
        {
            count=0;
        }
        else
        {
            count=sum;
        }


    }
    cout<<sum;
}
