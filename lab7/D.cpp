#include <iostream>
using namespace std;
void sum(string n){
    long int sum=0,k=0;
    for(int i=0; i<n.length(); i++){
        n[i]=n[i]-48;
        sum+=n[i];
    }
    cout<<long(sum);
}
int main(){
    string n;
    cin>>n;
    sum(n);
}