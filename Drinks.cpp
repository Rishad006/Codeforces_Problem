
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, a, ans=0;
double avg;
cin>>n;
for(int i=0; i<n; i++)
{
cin>>a;
ans = ans+a;
}
avg = (float)ans/n;
cout<<avg;
}
