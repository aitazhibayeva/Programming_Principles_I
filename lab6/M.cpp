#include <iostream>
#include <algorithm>

using namespace std;
void rev(int f[],int d){
    for (int i=d-1; i>=0; i--){
    cout << f[i]<< " ";
    }
}
void arr(int  n[],int s){
    for (int i=0; i<s; i++){
        cin>>n[i];
    }
    rev(n,s);
}
int main() {

    int s;
    cin >>s;
    int n[s];
    arr(n,s);
}
