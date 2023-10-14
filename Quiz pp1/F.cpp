#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==a[j][i]){
                k++;
            }
        }
    }
    if(k==(n*n)){
        cout<<"Perfect.";
    }
    else{
        cout<<"Not perfect.";
    } 
}