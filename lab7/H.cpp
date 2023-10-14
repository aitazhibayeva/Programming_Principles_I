#include <bits/stdc++.h>
using namespace std;

int f(int a){
    if(a==1) return 0;
    if(a==2) return 1;
    if(a==3) return 1;

    return f(a-1)+f(a-2);
}

int main(){
    int n;
    cin >> n;
    cout<<f(n);
}
// ne ponyala