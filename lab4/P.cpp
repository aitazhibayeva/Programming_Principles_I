#include <iostream> 
#include <cmath> 
using namespace std; 
int main(){ 
    int n,k=0,m,x=0,x2=0; 
    cin >> n; //3
    int a[n][n]; 
    int b[n];
    for (int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){ 
            cin >> a[i][j];
            if(j+i==n-1){   
              b[k]=a[i][j];  
                k++;           
            }      
        } 
    } 
    for(int i=0; i<k; i++){   
        x=b[i];
        x2+=x; 
    } 
    cout<<x2; 
    return 0; 
}