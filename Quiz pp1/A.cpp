#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int e=0,o=0;
    int k=0,c=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            e+=arr[i];
            k++;
        }
        else if(arr[i]%2==1){
            o+=arr[i];
            c++;
        }
    }
    cout<<"Left hand magic power: "<<e*k<<endl;
    cout<<"Right hand magic power: "<<o*c;
    return 0;
}