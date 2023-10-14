#include <bits/stdc++.h>
using namespace std;
void ar(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void find(int arr[], int x, int n){
    int k=0;
    for(int j=0; j<n; j++){
        if(arr[j]==x){
            k++;
            cout<<"YES";
            return ;
        }
    }
    if(k==0){
        cout<<"NO";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    ar(arr, n);
    int x;
    cin>>x;
    find(arr, x, n);
}