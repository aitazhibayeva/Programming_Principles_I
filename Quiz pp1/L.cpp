#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    int a[n][m];
    int max=0,k=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x; 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    if(max>x){
        cout<<"Penalty!";
    }
    else{
        cout<<"No penalty for today.";
    }

}
