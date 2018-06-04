/* Inputting two integers (say int1 and int2) and comparing int1^int2 and int2^int1*/



#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    x*log(y)>y*log(x) ? printf("<"): x*log(y) < y*log(x) ? printf(">"): printf("=");
    return 0;
}


