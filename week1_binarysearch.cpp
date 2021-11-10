#include<bits/stdc++.h>

using namespace std;

bool binarySearch(int *a, int key, int n, int &cnt){
	
	int l = 0;
	int r = n - 1;
	cnt = 0;
	while(l <= r) {
		int mid = (l + r) / 2;
		cnt++;
		if(a[mid] == key){
			return true;
		}
		else if(key < a[mid]) {
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	return false;
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
		int cnt = 0;
		bool ispresent = binarySearch(a, k, n, cnt);
		if(ispresent)
			cout << "Present " << cnt << endl;
		else
			cout << "Not Present " << cnt << endl;
	}
	return 0;
}