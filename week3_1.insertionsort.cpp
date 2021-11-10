#include<bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

pii insertion(int a[],int n){
	int com = 0;
	int sft = 0;
	for (int i = 1; i < n; ++i) {
		int j = i - 1;
		int temp = a[i];
		while(j >= 0 && a[j] > temp){
			com++;
			a[j+1] = a[j];
			sft++;
			j--;
		}
		a[j+1] = temp;
		sft++;
	}
	return {com, sft};
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		pii p = insertion(a,n);

		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}cout << endl;
		cout << "comparisons = " << p.first << endl;
		cout << "shifts = " << p.second << endl;
	}

	return 0;
}