#include <bits/stdc++.h>
using namespace std;
void func(int n){
    int fac=1;
    for(int i=2; i<=n; i++){
        fac*=i;
    }
    cout<<fac;
}
int main(){
    int n;
    cin>>n;
    func(n);
}