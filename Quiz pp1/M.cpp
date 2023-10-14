#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,n;
    bool t=false;
    cin>>a>>b;
    for(int i=-60; i<=60; i++){
        if(a* pow(2,i) == b){
            n=i;
            t=true;
            break;
        }
    }
    if(t){
        cout<<"YES ";
    cout<<n;
    }
    else{
        cout<<"NO ";
    }
}