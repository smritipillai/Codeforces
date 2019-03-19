
// Codeforces : https://codeforces.com/problemset/problem/71/A

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
         char str[100];
         int t,cnt=0;
         scanf("%d",&t);
         while(t--){
              scanf("%s",str);
            //   for(int i=0; i<strlen(str);i++){
            //       cnt++;
            //   }
              if(strlen(str) > 10){
                  printf("%c", str[0]);
                  printf("%d", strlen(str)-2);
                  printf("%c", str[strlen(str)-1]);
              }
              else 
                  printf("%s\n",str);    
                  printf("\n");
         }
}
