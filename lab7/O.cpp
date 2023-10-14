#include <iostream>
#include <string>
using namespace std;
string toKnary(int n, int k, string chars[]){
    if(n < k){
        if( n < 10){
            return to_string(n);
        }
        return chars[n-10];
    }
    if(n % k < 10){
        return toKnary(n/k, k, chars).append(to_string(n % k));
    }
    return toKnary(n/k, k, chars).append(chars[n % k - 10]);
}
int main(){
    string chars[26] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    int n, k;
    cin >> n >> k;
    
    string res = toKnary(n, k, chars);
    cout << res;
    return 0;
}