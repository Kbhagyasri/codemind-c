#include<stdio.h>
#include<math.h>
int main()
{
    int t,r,tc,q,sum=0,n;
    scanf("%d",&n);
    tc=log10(n)+1;
    q=n;
    while(q!=0)
    {
        r=q%10;
        sum=sum+pow(r,tc);
        q=q/10;
        tc--;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}