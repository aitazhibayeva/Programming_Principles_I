#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    cout<<"1"<<" ";
    for(unsigned long long int i=1; i<=n; i++){
        cout<<long(long(long(pow(i,i))))<<" ";
    }
}