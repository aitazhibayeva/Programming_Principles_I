#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, k, m, b;
    double x;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i + j == 0 or (i + j) % 2 == 0){
                a[i][j] = a[i][j] + 1;
            }
            else
            {
                a[i][j] = a[i][j] - 1;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}