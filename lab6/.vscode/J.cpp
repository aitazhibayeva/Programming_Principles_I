#include <bits/stdc++.h>
using namespace std;
void func(int a, int b, int c, int d){
    cout<<max(max(a,b),max(c,d));
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    func(a,b,c,d);
}