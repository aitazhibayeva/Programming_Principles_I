#include <iostream> 
#include <string> 
using namespace std; 
 int main(){ 
    int n,k,m,x; 
    string f=".", b, c="*", point="*"; 
    cin >> n; 
    int a[n][2*n-1]; 
    for(int j=0; j<n-1; j++){ 
        b=b+f; 
    } 
    for (int i=0; i<n; i++){   
        cout << b << point << b; 
        cout << endl; 
        if(b.size()>0){ 
           b.erase(b.size()-1);  
        } 
        else b=""; 
        point=point+c+c; 
    }
    return 0; 
}