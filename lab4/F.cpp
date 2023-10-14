#include <iostream> 
using namespace std; 
int main(){ 
    int n,max,m,x,y; 
    cin >> n; 
    max=-100001; 
    int a[n][n]; 
    for (int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            cin >> a[i][j]; 
            if (max < a[i][j]){ 
            max = a[i][j]; 
            x=i+1; 
            y=j+1; 
            } 
        } 
    } 
    cout << x<<" "<<y; 
    return 0; 
}