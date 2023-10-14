#include <bits/stdc++.h>
using namespace std;
void func(int n){
    int x=log2(n);
    if(pow(2,x)==n){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }       
}
int main(){
    int n;
    cin>>n;
    func(n);
}