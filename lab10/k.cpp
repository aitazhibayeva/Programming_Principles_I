#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<0){
        n*=-1;
    }
    if(n==1 || n==0){
        return false;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
        return true;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int k = count_if(a, a+n, prime);
    cout<<k;
}