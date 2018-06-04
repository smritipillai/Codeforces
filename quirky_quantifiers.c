/*The input should be an integer between 10  & 999 and divisible by 2.*/




#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=10 && a<=999)
    {
        if(a%2==0)
        printf("0");
        else
        printf("1");
    }
    return 0;
}
