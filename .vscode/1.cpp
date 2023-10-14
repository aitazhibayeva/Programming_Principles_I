#include <iostream>
using namespace std;
void func(int n, int a[], int b[]){
	int k=0,sum=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int j=0; j<n; j++){
		cin>>b[j];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i]==b[j]){
			k++;
		    }
	    }
		if(k!=0){
			sum++;
			k=0;
        }
    }
    cout<<sum;
}
int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	func(n,a,b);
}
