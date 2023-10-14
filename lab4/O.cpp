#include <iostream> 
#include <cmath> 
using namespace std; 
 int main(){ 
    int n,k=0,m,x=-1000000000; 
    cin >> n; 
    int a[n][n], b[n]; 
    for (int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){ 
            cin >> a[i][j]; 
            if(j-i==0){ 
                b[k]=a[i][j]; 
                k++; 
            }      
        } 
    } 
    for(int i=0; i<k; i++){ 
        if(x<b[i]){ 
            x=b[i];
        } 
    }
    for(int i=0; i<k; i++){ 
        if(x==b[i]){ 
            cout <<"Maximum element is: "<<x<<" with coordinates: " <<i+1<<";"<<i+1; 
            break; 
        } 
    } 
    return 0; 
}