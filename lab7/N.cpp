#include <bits/stdc++.h>
using namespace std;
int qwe(int a[], int n, int x, int i){
    int c=0;
    if(i<n){
        if(i==0 and a[i]<=x){
            c=1;
        }
        if(abs(a[i+1]-a[i])<=x){
            return c+1 + qwe(a, n, x, i+1);
        }
        else{
            return c + qwe(a, n, x, i+1);
        }
    } 
    else{
        return 0;
    }  
}
int main(){
    int n;
    int x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    if(qwe(a, n, x, 0)>=2){
        cout<<"cheater";
    }
    else{
        cout<<"no";
    }
} //ne ponyala