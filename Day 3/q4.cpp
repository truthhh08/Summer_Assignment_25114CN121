#include<iostream>
using namespace std;

int gcd(int a,int b){
    int r=a%b;
    if(r==0){
        return b;
    }
    return gcd(b,r);
}
int main(){
    int a,b;
    cin>>a>>b;
    int lcm;
   lcm=a*b/gcd(a,b);
   cout<<lcm;
}