#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=0;
    while(n>0){
        m=m*10+n%10;
        n/=10;

    }
    if(m==n) cout<<"palindrome";
    else cout<<"not palindrome";
}