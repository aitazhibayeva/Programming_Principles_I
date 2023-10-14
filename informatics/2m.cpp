#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],p,m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            p=i;
        }
    }
    int max1=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max1){
            if(i!=p){
                max1=arr[i];
            }
        }
    }
    cout<<max*max1;
}