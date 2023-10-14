#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j!=n-i){
                cout<<".";
            }
            if(j==n-i){
                cout<<c;
                c++;
            }
        }
        cout<<endl;
    }
}