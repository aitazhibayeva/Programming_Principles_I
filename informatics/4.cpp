#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b;
    for(int i=0; i<n; i++){
        b=a[i]*a[i+1];
    }
    cout<<b;
}