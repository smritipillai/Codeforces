//Question link: https://codeforces.com/problemset/problem/136/A

#include<stdio.h>
int main(){
         int i,n,j;
         scanf("%d",&n);
         int a[n],b[n];
         for(i=1; i<=n; i++){ 
                  scanf("%d",&a[i]);
                  b[a[i]]=i; 
                  
         }
         for(j=1; j<=n; j++)
         printf("%d ",b[j]);
         return 0;
}
