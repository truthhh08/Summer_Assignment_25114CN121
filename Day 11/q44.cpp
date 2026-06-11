#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}