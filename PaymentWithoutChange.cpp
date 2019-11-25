#Div 3 ques link: https://codeforces.com/contest/1256/problem/A

#include<bits/stdc++.h>
using namespace std;
long long t,a,b,n,s;
int main(){
cin>>t;
while(t--){
         cin>>a>>b>>n>>s;
         if(s%n<=b && a*n+b>=s)
         cout<<"Yes"<<endl;
         else 
         cout<<"No"<<endl;
         }
}


