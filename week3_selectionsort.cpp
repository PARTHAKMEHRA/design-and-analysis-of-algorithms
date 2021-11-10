#include<bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

pii selection(int a[], int n){
	int minindex;
	int swp = 0;
	int com = 0;
	for (int j = 0; j < n - 1; ++j) {
		minindex=j;
		for(int i = j + 1; i < n; i++){
			com++;
			if(a[i] < a[minindex])
				minindex = i;
		}
		swp++;	
		swap(a[minindex], a[j]);
	}

	return {com, swp};
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		pii p = selection(a,n);

		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}cout << endl;
		cout << "comparisons = " << p.first << endl;
		cout << "swaps = " << p.second << endl;
	}
}