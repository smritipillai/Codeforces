#include<stdio.h>
int main(){
         int a=0,b=0,c=0,n;
         scanf("%d\n",&n);
         int x[n],y[n],z[n];
         for(int i=0;i<n;i++){
                  scanf("%d %d %d\n",&x[i],&y[i],&z[i]);
         }
         
         for(int i=0;i<n;i++){
                  a=a+x[i];
                  b=b+y[i];
                  c=c+z[i];
         }
         if(a==0 &&b ==0 &&c==0)
         printf("YES");
         else
         printf("NO");
}
