#include <iostream>
#include <cmath>
using namespace std;
bool power(int n){
    int x=log2(n);
    if(pow(2,x) == n){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    int n;
    cin>>n;
    power(n);
}
