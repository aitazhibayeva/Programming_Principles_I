#include <iostream>
#include <string>
using namespace std;
int main(){
    string b;
    char a;
    cin>>a>>b;
    
    for(int i=0; i<b.size(); i++){
        if(b[i]!=a){
            cout<<b[i];
        }
    }
}