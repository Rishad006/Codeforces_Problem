
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i, count=-1, n;
   cin>>n;
   int A[n];
   for(i=0; i<n; i++)
   {
       cin>>A[i];
       if(A[i]==1)
       {
           count++;
           break;
       }
   }
   if(count==-1)
   {
       cout<<"EASY";
   }
   else {
    cout<<"HARD";
   }
    return 0;
}
