#include <iostream>
#include <cmath>
using namespace std;
double power(double a, int n){
    cout<<pow(a,n);
}
int main(){
    double a;
    int n;
    cin>>a>>n;
    power(a,n);
}