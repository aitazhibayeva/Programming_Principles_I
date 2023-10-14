#include <iostream>
using namespace std;
void ord(int n){
    int a[n];
    for(int i=1; i<=n; i++){
        a[i]=i;
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    ord(n);
}