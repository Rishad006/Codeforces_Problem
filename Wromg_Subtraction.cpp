
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i=1, sum=0;
    cin>>n>>k;
    while(i<=k)
    {
      if(n%10==0)
      {
          n = n/10;
      }
      else{
        n = n-1;
      }
      i++;
    }
    cout<<n;

}
