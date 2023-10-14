#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string x= "0123456789ABCDEF";
    string s;
    while(n>0){
        int y = n % 16;
        s += x[y];
        n /= 16;
    }
    reverse(s.begin(), s.end());
    cout<<s<<endl;
}