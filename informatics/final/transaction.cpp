#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, curr, sum=0;
    int arr[7]={1,2,5,10,20,50,100};
    for(int i=0; i<7; i++){
        cin>>curr;
        sum+=arr[i]*curr;
    }
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>curr;
        if(sum<curr){
            cout<<"Transaction stopped!"<<endl;
            continue;
        }
        cout<<"Transaction accepted!"<<endl;
        sum-=curr;
    }
}