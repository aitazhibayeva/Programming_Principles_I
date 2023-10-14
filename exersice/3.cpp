#include <iostream>
using namespace std;
int main(){
    int k=0;
    int a[3];
    int b[3];
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    for(int j=0; j<3; j++){
        cin>>b[j];
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i]==b[j]){
                k++;
            }
            break;
        }
    }    cout<<k;
}