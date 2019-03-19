
// Codeforces : String Task (https://codeforces.com/problemset/problem/118/A)

#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i;
    gets(s);
    strlwr(s);
    for(i=0; i<strlen(s); i++)
        if(s[i]!='a'&&s[i]!='i'&&s[i]!='e'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
            printf(".%c",s[i]);
    return 0;
}
