#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char output =static_cast<char>(96+j);
            cout<<output;
        }
        cout<<endl;
    }
}