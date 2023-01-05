#include<stdio.h>
#include<math.h>
int main()
{
    int n,v,a=0,k,m,i,b,c;
    scanf("%d%d",&n,&m);
    i=n;
    while(n)
    {
        n/=10;
        a++;
    }
    n=i;
    b=pow(10,m);
    c=pow(10,a-m);
    v=n%b;
    k=n/c;
    printf("%d",abs(v-k));
}