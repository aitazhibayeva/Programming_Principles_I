#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n]; 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){ 
            if (n - 1 -j - i == 0){ 
                cout << i + 1;  
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}