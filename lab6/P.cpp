#include <iostream>
using namespace std;
int num(int a){
    if(a>0){
        return a;
    }
    else {
        return (a*(-1));
    }
}
int main(){
    int a;
    cin>>a;
    cout<<num(a);
    return 0;
}