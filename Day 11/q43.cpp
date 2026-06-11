#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(prime(a)==false) 
    cout<<"number is prime";
    else cout<<"number is composite";
}
bool prime(int a){
    bool flag=false;
    for(int i=2;i<a;i++){
        if(a%i==0) {
            flag=true;
            break;
        }
    }
    return flag;
}