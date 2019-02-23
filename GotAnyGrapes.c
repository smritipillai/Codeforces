//Link to question: https://codeforces.com/problemset/problem/1114/A

#include<stdio.h>
int main(){
         int x,y,z,a,b,c;
         scanf("%d %d %d\n" ,&x,&y,&z);
         scanf("%d %d %d" ,&a,&b,&c);
         if(x>a){
                  printf("NO");
         }
         else if((x+y)> a+b){
                  printf("NO");
         }
         else if(x+y+z > a+b+c){
                  printf("NO");
         }
         else
         printf("YES");
         return 0;
}
