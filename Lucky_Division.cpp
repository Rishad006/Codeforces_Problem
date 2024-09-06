#include <iostream>
using namespace std;

int main() {
int i, count=-1, n;
cin>>n;
int A[] ={4, 7, 44, 47, 74, 77,444,447, 474, 477, 744, 747, 777};
for(i=0; i<13; i++)
{
    if(n%A[i]==0)
    {
        count++;
        break;
    }
}
if(count==-1)
{
    cout<<"NO";
}
else{
    cout<<"YES";
}
    return 0;
}
