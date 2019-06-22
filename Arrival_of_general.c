//Question link:https://codeforces.com/contest/144/problem/A

#include<stdio.h>
int main(){
	int i,j,n,p,q;
	int max=-1,min=10000;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]<=min){
			min=a[i];
			p=i;
		}
		if(a[i]>max){
			max=a[i];
			 q=i;
		}
	}
	//printf("%d %d\n",p,q);
	if(p<q)
	printf("%d",q+(n-1-p)-1);
	else
	printf("%d",q+n-1-p);
	return 0;
}
