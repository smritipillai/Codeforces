
/*If at first you don't succeed...*/



#include<stdio.h>
int main()
{
    int a,b,c,n;

    //getting the inputs from user
    scanf("%d %d %d %d", &a,&b,&c,&n);
   
    //checking the condition
    if(((n-(a+b-c))>0&&c<=a&&c<=b))
    printf("%d",n-(a+b-c));
    else
    printf("-1");
    return 0;
}
