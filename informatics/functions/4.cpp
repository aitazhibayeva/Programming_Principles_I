#include <iostream>
using namespace std;
bool Election(bool x, bool y, bool z){
    if(x==y || x==z){
        return x;
    }
    else if(z==y){
        return z;
    }
}
int main(){
    bool x,y,z;
    cin>>x>>y>>z;
    cout<<Election(x,y,z);
}