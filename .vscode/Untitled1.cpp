#include <iostream>
#include <queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	queue<int> d;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		d.push(a);
	}
	for(int i=0; i<d.size(); i++){
		cout<<d[i]<<" ";
	}
}
