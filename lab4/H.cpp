#include <iostream> 
using namespace std; 
 int main(){ 
    int n,k=1000000000,m,x=0,y; 
    cin >> n >>m; 
    int a[n][m];
    for (int i=0; i<n; i++)  { 
        for(int j=0; j<m; j++){ 
            cin >> a[i][j];      
        } 
    } 
    for (int i=0; i<n; i++){ 
        for(int j=0; j<m; j++){ 
            x+=a[i][j]; 
        } 
        if(k>x){ 
            k=x; 
            y=i+1; 
        } 
        x=0; 
    } 
    cout <<y; 
    return 0; 
}