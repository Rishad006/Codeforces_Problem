
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i, j, sum = 0, sum1=0, sum2=0;

    cin>>n;
     int ara[100][100];
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>ara[i][j];

        }
          sum=sum+ara[i][0];
          sum1 = sum1+ara[i][1];
          sum2 = sum2+ara[i][2];


    }

  if(sum==0 && sum1==0 && sum2==0)
    {
       cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
