//http://codeforces.com/contest/1337/problem/B

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
         int n,t,x,m;
         cin>>t;
         while(t--){
                  cin>>x>>n>>m;
                  if(x<20){
                           while(m--){
                           x = x-10;
                           //cout<<"hi";
                           }
                  }
                  else{
                           while(n--){
                                    if(x<=0){
                                             break;
                                    }
                                    else{
                                             x = x/2 + 10;
                                    }
                           }
                           while(m--){
                                    x = x-10;
                           }
                  }
                  
                  if(x<=0){
                           cout<<"YES"<<"\n";
                  }
                  else{
                           cout<<"NO"<<"\n";
                  }
         }
}