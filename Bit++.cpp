#include <stdio.h>

int main() {
int n, i, x=0;
scanf("%d", &n);
char s[n];
for(i=0; i<n; i++)
{
    scanf("%s", s);
    if(s[1]=='+')
    {
        x++;
    }
    if(s[1]=='-'){
        x--;
    }
}
printf("%d\n", x);
    return 0;
}
