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
	cin >> t;
	while(t--) {
		int n, k; 
		cin >> n;
		int* a = new int[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		cin >> k;
		int index = linearSearch(a, n, k);
		if(index == -1)
			cout << "Not Present " << n << endl;
		else
			cout << "Present " << index + 1 << endl;
	}
	return 0;
}