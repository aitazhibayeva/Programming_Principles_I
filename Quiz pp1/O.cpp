#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int sum=0,x=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum+=arr[i][j];
        }
        x=sum/m;
        cout<<x<<" ";
        sum=0;
        x=0;
    }
    return 0;
}