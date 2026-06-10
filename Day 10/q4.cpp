#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            char output=static_cast<char>(96+k);
            cout<<output;
        }
        for(int l=i-1;l>=1;l--){
            char output=static_cast<char>(96+l);
            cout<<output;
        }
        cout<<endl;
    }
}