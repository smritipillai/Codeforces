//Question link:https://codeforces.com/contest/263/problem/A

#include<stdio.h>
#include<stdlib.h>
int main(){
	int t,a[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==1)
				t=abs(i-2)+abs(j-2);
		}
	}
	printf("%d",t);
}
