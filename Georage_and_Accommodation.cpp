
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i, count=0, n, p, q;
   cin>>n;
   for(i=0; i<n; i++)
   {
       cin>>p>>q;
      if(q-p>=2)
      {
          count++;
      }
   }
   cout<<count;
    return 0;
}
