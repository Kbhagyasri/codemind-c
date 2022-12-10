#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,sum=0;
    float avg=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        sum=sum+a[i];
        
    }
    avg=(float)sum/N;
    
    printf("%.2f ",avg);
    
}