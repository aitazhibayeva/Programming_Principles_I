#include <iostream> 
using namespace std; 
 int main(){ 
    int n,k,m; 
    cin >> n; //3
    int a[n][n]; 
    for (int i=0; i<n; i++) { 
        for(int j=0; j<n; j++){ 
            if(j==0 or i==0){
                a[i][j]=i+j; //a[0][0] = a[0][1] = a[0][2] = a[1][1] = a[1][2]
            } 
            else{ //i=1
                a[i][j]=a[i-1][j]; //i=1,j=1 - "a[0][1]" = a[1-1][1]  ==1;  
                                   //i=1,j=2 - "a[0][2]" = a[1-1][2] ==2;
                if(i>1){   //i=2; j=1,2;
                    a[i][j]=a[i-1][j]+a[0][j];   //i=2,j=1 - "a[1][2]" = a[2-1][1]+a[0][1] == 1+1=2; 
                                                 //i=2,j=2 - "a[1][4]" = a[2-1][2]+a[0][2] == a[1][2]+a[0][2] == 2+2=4
                } 
            } 
        } 
    }
    for (int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){ 
          cout << a[i][j]<<" ";   
        } 
        cout << endl; 
    }  
    return 0; 
}