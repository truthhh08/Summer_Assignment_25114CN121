#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int change=n;
    while(n>0){
        int digit =n%10;
        int fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==change){
            cout<<"number is strong ";
        }

            else cout<<" number is not strong";
    
}