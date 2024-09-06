
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i, count=0, n;
   cin>>n;
   int A[n];
   for(i=0; i<n; i++)
   {
       cin>>A[i];
       count=count+A[i];
   }
   if(count==0)
   {
       cout<<"EASY";
   }
   else {
    cout<<"HARD";
   }
    return 0;
}
