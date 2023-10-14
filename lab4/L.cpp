#include <iostream> 
#include <cmath> 
using namespace std; 
 int main(){ 
    int n,k=0,m,b,x=1000000,x1,x2; 
    cin >> n >>m; 
    int a[n][m];
    for (int i=0; i<n; i++){ 
        for(int j=0; j<m; j++){ 
            cin >> a[i][j]; 
        } 
    } 
    cout <<"coordinates of min elements:"<<endl; 
    for(int j=0;j<m;j++){ 
        for(int i=0;i<n;i++){ 
            if(x>a[i][j]){ 
                x=a[i][j]; 
                x1=i; 
                x2=j; 
            } 
        } 
        k=k+x; 
        x=1000000; 
        cout <<x1+1<<";"<<x2+1<<endl;     
    } 
    cout << endl; 
    cout <<"Their sum:"<< endl <<k;  
    return 0; 
}