#include <stdio.h>
int main(){
  int a,b,c,l1,l2,l3;
  scanf("%d\n%d\n%d\n",&a,&b,&c);
  l1=((a+b)*c > a+(b*c)? (a+b)*c : a+(b*c));
  l2=(a*b*c > a*(b+c)? a*b*c : a*(b+c));
  l3=(a+b)*c > a+b+c? (a+b)*c : a+b+c;
  if(l1>l2 && l1>l3){
           printf("%d",l1);
  }
  else if(l2>l3 && l2 >l1){
           printf("%d",l2);
  }
  else
  printf("%d",l3);
}
