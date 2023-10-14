#include <iostream>
#include <algorithm>

using namespace std;
double per(int a,int b){
    double c=b*100;
    double x=c/a;
    
    return x;
}
int main() {

    int p,g;
    cin >>p>>g;
    cout <<per (p,g);
}