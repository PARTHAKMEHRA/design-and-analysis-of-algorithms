#include <bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

pii merge(int a[], int l, int m, int h) {
	int i = l;
	int j = m + 1;
	int k = 0;
	int com = 0;
	int inv = 0;
	int b[h - l + 1];
	while (i <= m && j <= h) {
		if (a[i] < a[j]) {
			if(i != k) inv++;
			b[k] = a[i];
			i++;
		}else {
			if(j != k) inv++;
			b[k] = a[j];
			j++;
		}
		com++;
		k++;
	}

	while (i <= m) {
		if(i != k) inv++;
		b[k] = a[i];
		i++;
		k++;
	}

	while (j <= h) {
		if(j != k) inv++;
		b[k] = a[j];
		j++;
		k++;
	}
	
	for (i = l; i <= h; i++)
		a[i] = b[i - l];

	return {com, inv};
}

void mergeSort(int a[], int l, int h, int &c, int &in) {

	if (l < h) {
		int mid = (l + h) / 2;

		mergeSort(a, l, mid, c, in);
		mergeSort(a, mid + 1, h, c, in);
		
		pii p = merge(a, l, mid, h);
		c += p.first;
		in += p.second;
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int com = 0, inv = 0;
		mergeSort(a, 0, n - 1, com, inv);

		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}cout << endl;
		cout << "comparisons = " << com << endl;
		cout << "inversions = " << inv << endl;
	}

	return 0;
}
