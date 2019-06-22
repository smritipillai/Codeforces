#include<stdio.h>
#include<string.h>
int main(){
         char a[1000];
         scanf("%s",a);
         for(int i=0; a[i]!='\0'; i++){
                  if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B'){
                           a[i]=a[i+1]=a[i+2]=' ';
                  }
         }
         printf(a);
}
