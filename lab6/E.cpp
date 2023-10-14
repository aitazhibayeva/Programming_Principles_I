#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double gipo(double a, double b){
    double c=sqrt(a*a+b*b);
    cout<<setprecision(4)<<c;
}
int main(){
    double a,b,c;
    cin>>a>>b;
    gipo(a,b);
}