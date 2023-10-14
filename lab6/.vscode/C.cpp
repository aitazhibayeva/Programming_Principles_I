#include <bits/stdc++.h>
using namespace std;
void arm(int a[], int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
}
void find(int g[], int m[], int p){
    int firs=0,sek=0,k=0;
    while(firs<p && sek<p){
        if(g[firs]<m[sek]){
            firs++;
        }
        else if(g[firs]>m[sek]){
            sek++;
        }else{
            firs++;
            sek++;
            k++;
        }
    }
    cout<<k;
}
int main(){
    int n;
    cin>>n;
    int a1[n],a2[n];
    arm(a1,n);
    arm(a2,n);
    find(a1,a2,n);
}