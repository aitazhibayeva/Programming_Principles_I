#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1]){
            k++;
        }
    }
    cout<<k;
}