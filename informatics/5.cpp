#include<iostream>
using namespace std;
int min(int a, int b, int c, int d)
{

 int min1 = 0;

 int min2 = 0;

 if (a < b)

 {

  min1 = a;

 }

 else

 {

  min1 = b;

 }

 if (c < d)

 {

  min2 = c;

 }

 else

 {

  min2 = d;

 }

 if (min1 < min2)

 {

  cout << min1 << endl;

 }

 else

 {

  cout << min2 << endl;

 }

 return 0;
}

int main(){
min(10,20,30,40);
return 0;
}