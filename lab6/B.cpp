#include <iostream>
#include <algorithm>
using namespace std;
void mub(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void arr(int d[],int g[],int n){ //4 5 2 //3 8 7
    int b =n;
    int f[b];

    int first=0;
      
    for(int i=0;i<b;i++){
        if (d[first]>g[first]){
            f[i]= d[first]-g[first];
            first++;
        }
        else if (d[first]<g[first]){
            f[i]=g[first]-d[first];
            first++;
        }
        else if (d[first]==g[first]){
            f[i]=d[first]-g[first];
            first++;
        }
        cout << f[i]<<" ";
    }
}
int main (){
    int n;
    cin >>n;
    int a1[n];
    int a2[n];
    mub(a1,n);
    mub(a2,n);
    arr(a1,a2,n);
}