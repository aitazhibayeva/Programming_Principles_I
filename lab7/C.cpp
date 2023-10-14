#include <iostream>
#include <algorithm>
using namespace std;
void mub(int m[], int n ){
    for (int i=0;i<n;i++){
    cin >> m[i];
    }  
}  
void fing( int m[],int n, int f){
    int h=0;
 
    for(int j=0;j<n;j++){
        if (m[j]==f){
            cout<<  "Yes";
            h++;
            return ;
        }
    }
  
if (h==0){
    cout <<"No";
}
}
   

int main(){
    int n;
    cin >>n;
    int m[n];
    mub(m,n);
    int f;
    cin >>f;
    fing(m,n,f);
}