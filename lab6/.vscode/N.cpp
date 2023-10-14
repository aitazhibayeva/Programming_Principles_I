#include <bits/stdc++.h>
using namespace std;
void matr(int n, int m){
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int arm[m][n];
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            arm[j][i]=arr[i][j];
            cout<<arm[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    matr(n,m);
}