#include <iostream>
#include <cmath>
using namespace std;
void factorial(int n){
    int res = 1, i;
    for (i = 2; i <= n; i++){
        res *= i;
    }
    cout<<res;
}
int main(){
    int n;
    cin>>n;
    factorial(n);
}