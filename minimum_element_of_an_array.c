#include<stdio.h>
int main()
{
    int N,min;
    scanf("%d",&N);
    int a[N],i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<N;i++)
    {
        //scanf("%d",&a[i]);
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
}