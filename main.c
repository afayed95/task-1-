#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    long long sum=0;
    scanf("%d",&n);
   int ar[1000];

for (i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
    sum+=ar[i];

}
printf("%lld",sum);


    return 0;
}
