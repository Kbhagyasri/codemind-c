#include<stdio.h>
int main()
{
    int n,unit;
    float total;
    scanf("%d",&unit);
    if(unit<=199)
    {
        n=unit*1.20;
    }
    else if(unit>=200 && unit<400)
    {
        n=unit*1.50;
    }
    else if(unit>=400 && unit<600)
    {
        n=unit*1.8;
    }
    else if(unit>=600)
    {
        n=unit*2.00;
    }
    if(n<400)
    total=n+100;
    else if(n>=400)
    total=n+n*0.15;
    {
       printf("%.2f",total); 
        
    }
}








