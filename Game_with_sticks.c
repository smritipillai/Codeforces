//Question link:https://codeforces.com/contest/451/problem/A

#include<stdio.h>
int main(){
    int m,a,b;
    scanf("%d%d",&a,&b);
    m=a<b?a:b;
    printf("%s",m%2?"Akshat":"Malvika");
}
