#include <bits/stdc++.h>
using namespace std;
void func(int n, int a[], int x){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>x;
    int k=0;
    for(int i=0; i<n; i++){
        if(a[i]==x){
            cout<<"Yes";
            return ;
            k++;
        }
    }
    if(k==0){
        cout<<"No";
    }
}
int main(){
    int n,x;
    cin>>n;
    int a[n];
    func(n, a, x);
}