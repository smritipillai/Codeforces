//Question link: https://codeforces.com/problemset/problem/339/A

#include<stdio.h>
#include<string.h>
int main(){
         char a[100];
         gets(a);
         for(int i=0; i<strlen(a)-1; i=i+2){
                for(int j=0; j<strlen(a)-i-1; j=j+2)
                           if(a[j]>a[j+2]){
                                 int t =a[j];
                                 a[j]=a[j+2];
                                 a[j+2]= t;
                           }
         }
         printf("%s",a);
         return 0;
}
