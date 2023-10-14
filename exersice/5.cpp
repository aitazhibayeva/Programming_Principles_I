#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<n+1; i++){
        for(int j=1; i>=j; j++){
            cout<<"[*]";
        }
        cout<<endl;
    }
}