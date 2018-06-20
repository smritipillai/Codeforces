#include <stdio.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);

    // (n+1) includes null character
    char a[n+1];
    scanf("%s",a);
    for(int i=0;i<n-1;i++)
    {
        //checks if the adjacent alphabets are same
        if(a[i]==a[i+1])
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
