#include <iostream>
#include <algorithm>
using namespace std;
int arm(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
sort(arr,arr+n); //2 2 2 2 4 //2 3 4 4 5
}
int arr(int m[],int n[],int p){
    int h=0,firs=0,sec=0;
    while(firs<p && sec<p){
        if(m[firs]<n[sec]){
        firs++;
    }
    else if(m[firs]>n[sec]){
        sec++;
    }
    else{
        firs++;
        sec++;
        h++;
    }
}
cout<<h;
}
int main(){
    int n;
    cin>>n;
    int a1[n];
    int a2[n];
    arm(a1,n);
    arm(a2,n);
    arr(a1,a2,n);
}
