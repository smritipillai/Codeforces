// The Question link: http://codeforces.com/contest/1335/problem/A

#include<iostream>
using namespace std;
int main(){
         int n,t;
         cin>>t;
         while(t--){
                  cin>>n;
                  if(n<3){
                           cout<< "0"<<"\n";
                  }
                  else if(n%2==0){
                           cout<< n/2 - 1<<"\n";
                  }
                  else {
                           cout<< n/2<<"\n";
                  }
         }
}