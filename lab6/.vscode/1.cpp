#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n,less<int>());
    for(int i=0; i<n; i++){
        if(arr[i+1]-arr[i]>1){
            sum+=arr[i+1]-arr[i]-1;
        }
    }
    cout<<sum<<endl;
    return 0;
} 