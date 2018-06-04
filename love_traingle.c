/*To determine whether there is love traingle on Earth.We call a love triangle a situation in which plane A likes plane B, plane B likes plane C and plane C likes plane A.*/


#include <stdio.h>
int main()
{
	int n,i,a[5001];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d", &a[i]);
	}
	for(i=1;i<=n;i++)
		if(a[a[a[i]]]==i)
		{
			printf("YES");
			return 0;
		    
		}
	printf("NO");
	return 0;
}
