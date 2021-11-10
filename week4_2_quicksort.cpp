#include <bits/stdc++.h>


using namespace std;
int partition(int a[], int l, int h, int &com, int &swp) {
	int j = l;
	for(int i = l; i < h; i++) {
		if(a[i] <= a[h]) {
			swp++;
			swap(a[i], a[j++]);
		}
		com++;
	}
	swap(a[h], a[j]);
	swp++;
	return j;
}

void quickSort(int a[], int l, int h, int &c, int &swp) {

	if (l < h) {
		int p = partition(a, l, h, c, swp);

		quickSort(a, l, p - 1, c, swp);
		quickSort(a, p + 1, h, c, swp);
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

		int com = 0, swp = 0;
		quickSort(a, 0, n - 1, com, swp);

		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}cout << endl;
		cout << "comparisons = " << com << endl;
		cout << "swaps = " << swp << endl;
	}

	return 0;
}