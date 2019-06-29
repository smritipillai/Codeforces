//Question link:https://codeforces.com/problemset/problem/337/A

#include <stdio.h>
int main(){
	int n,m,i,j,a[100],b,k,small=5000;
	scanf("%d%d\n",&n,&m);
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;i++){
		for(j=i+1;j<m;j++){
			if(a[i]<a[j]){
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}


// 	for(int i=0;i<m; i++){
// 	      printf("%d ",a[i]);
// 	}

	for(k=0;k<=m-n;k++){
		if((a[k]-a[k+n-1])<small)
		small=a[k]-a[k+n-1];
	}
	printf("%d",small);
	return 0;
}
