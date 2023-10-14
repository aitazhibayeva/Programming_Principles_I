#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x,k=0;
    cin>>x;
    for(int i=0; i<v.size(); i++){
        if(v[i]>x && isPrime(v[i])){
            k++;
        }
    }
    cout<<k;
}
