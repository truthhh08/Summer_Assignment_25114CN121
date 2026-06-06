#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a;
    do
    {
         int i=n%2;
        a.push_back(i);
        n=n/2;
    }
     while (n>0);
        for(int i=a.size()-1;i>=0;i--){
        cout<<a[i];
    }
  
}