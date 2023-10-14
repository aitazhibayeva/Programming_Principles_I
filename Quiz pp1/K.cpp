#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n; 
    int a1[n],a2[n];
    for(int i=0; i<n; i++){
        cin>>a1[i];
    }
    for(int i=0; i<n; i++){
        cin>>a2[i];
    }
    int x,k=0;
    cin>>x;   
    for(int i=0; i<n; i++){  
        if(a1[i]<=x && a2[i]>=x){
            k++;
        }
    }
    cout<<k; 
}