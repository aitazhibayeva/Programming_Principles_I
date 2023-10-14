#include <bits/stdc++.h>
using namespace std;
string ToBin(int n, string res){
    if(n==0){
        return res;
    }
    return ToBin (n/2, char(n%2+'0')+res);
}

int main(){
    int n;
    cin >> n;
    cout << ToBin(n,"");
} //ne ponyala