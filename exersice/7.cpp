#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k=0, sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]==a[j]){
                k++;
            }
        }
        if(k==1){
            sum+=a[i];
        }
        k=0;
    }
    cout<<sum;
}