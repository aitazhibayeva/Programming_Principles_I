#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int mx=0;
    for(int i=0; i<n; i++){
        for(int j=1+i; j<n; j++){
            mx=max(mx, gcd(a[i], a[j]));
        }
    }
    cout<<mx;
}