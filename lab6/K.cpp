#include <iostream>
#include <algorithm>
using namespace std;
int sum(int s){
    int sum=0;
    while(s!=0){
        sum+=s%10;
        s /=10;
    }
    return sum;
}
int main(){
    int s;
    cin>>s;
    cout<<sum(s);
}