#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n; j++){
            if(n-i-j+1==0){
                cout<<i;
            }
            else{
                cout<<".";
            }
        }
        cout<<endl;
    }
}