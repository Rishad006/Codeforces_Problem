
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sum =0, sum1=0, c=0;
    cin>>n;
    int A[n];
    for(i=0; i<n; i++)
    {
        cin>>A[i];
        sum=sum+A[i];
    }
    int div=sum/2;
    sort(A, A+n);

    for(i=n-1; i>=0; i--)
    {
        sum1=sum1+A[i];
        c++;
        if(sum1>div)
        {
            break;
        }


    }
    cout<<c;
    return 0;
}
