// Question link: https://codeforces.com/problemset/problem/58/A

#include <stdio.h>
int main(){
	char s,a[6]="hello";
	int i=0;
	while((s = getchar())!='\n')
	if(s == a[i]){
		i++;
	}
	if(i==5){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
