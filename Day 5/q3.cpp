#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a;
    int div=2;
    while(n>1){
        if(n%div==0){
            a.push_back(div);
            n=n/div;
        }
    }
    int s=a.size();
    for(int i=0;i<s;i++){
        cout<<a[i]<<endl;
    }
}