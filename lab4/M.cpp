#include <iostream>
using namespace std;
int main(){
    int n; //3
    cin >> n;
    int arr[n][n];

    if(n % 2 == 1){
        arr[n / 2][n / 2] = n*n - 1;
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n - i; j++){ //first row  j=0; 0<3-0
            arr[i][j] = cnt; // [0][0]=0; [0][1]=1; [0][2]=2;
            cnt++;  //1
        }

        for(int j = 1; j < n - i - i; j++){ // right column
            arr[j + i][(n - i) - 1] = cnt; //[1][1]
            cnt++;
        }

        for(int j = (n - 2) - i; j >= i; j--){  // last row
            arr[(n - i) - 1][j] = cnt;            
            cnt++;
        }
        for(int j = ((n - i) - 2); j > i; j--){ // left column
            arr[j][i] = cnt;
            cnt++;
        }

    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}