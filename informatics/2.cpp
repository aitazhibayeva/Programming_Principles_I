#include <iostream>
using namespace std;
int main(){
    int n,s=1,k=0,b=0;
    cin>>n;
    while(n>=s){
        cout<<s<<endl;
        k=k+1;
        b=(k+1)*(k+1);
        s=b;
    }
    return 0;
}