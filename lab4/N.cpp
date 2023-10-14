#include <cmath>
#include <iostream>
using namespace std;
int main(){
    int a, c=0;
    cin >> a;
    for (int i = 2; i < a; i++){
        for (int j = 1; j < a; j++){
            if ((i / j) * j == i){
                c = c + 1;
            }
        }
        if (c == 2){
            cout << i << " " << "is prime" << endl;
        }
        c = 0;
    }
    return 0;
}