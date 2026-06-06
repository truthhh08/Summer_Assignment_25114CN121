#include<bits/stdc++.h>
using namespace std;
int main(){
    double x;
    int n;
    cin>>x>>n;
    if(x==1) {
      cout<<1;
      return 0;
      } 
        if(n==0) x=1;
        if(n>0){
        double  a=x;
        for(long long i=2;i<=n;i++){
        x*=a;
            }
        }
         if(n<0){
            x=1/x;
          double   a=x;
            for(long long i=-2;i>=n;i--){
                x*=a;
            }
         }        
       cout<<x;
       // high time complexity
}