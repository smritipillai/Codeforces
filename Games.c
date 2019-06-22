#include<stdio.h>
int main(){
         int n,cnt=0;
         scanf("%d\n",&n);
         int a[n],h[n];
         for(int i=0;i<n;i++){
                  scanf("%d %d\n",&h[i],&a[i]);
         }
         for(int i=0;i<n;i++){
                  for(int j=0;j<n;j++){
                         if(h[i]==a[j]){
                           cnt++;
                  }  
                  }
         }
         printf("%d",cnt);
}
