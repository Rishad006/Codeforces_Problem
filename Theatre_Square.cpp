#include <stdio.h>
#include<math.h>

int main() {
double x, y, a, b, c;
long long int area;

scanf("%lf%lf%lf", &x, &y, &a);
b=ceil(x/a);
c=ceil(y/a);
area = b*c;
printf("%lld", area);

    return 0;
}
