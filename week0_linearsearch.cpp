#include<bits/stdc++.h>

using namespace std;

int linearSearch(int a[], int n, int key) {
	int i;
	for (i = 0; i < n; ++i) {
		if(a[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k; 
		cin>>n>>k;
		int* a = new int[n];
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		int index = linearSearch(a,n,k);
		if(index == -1)
			cout<< "Not Found" <<endl;
		else
			cout<< index <<endl;
	}
	return 0;
}