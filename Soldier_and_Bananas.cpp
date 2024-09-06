
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int k,n,w, borrow, i, sum = 0;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++)
    {
       sum+=i*k;
    }
    if(sum>n)
    {
      borrow = sum-n;
    cout<<borrow;

    }
    else{
        cout<<"0";
    }



}
