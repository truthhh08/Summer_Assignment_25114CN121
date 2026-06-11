#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Maximum of the two is:"<<Max(a,b);
}
int Max(int a,int b){
    if(a>b) 
    return a;
    else return b;
}
