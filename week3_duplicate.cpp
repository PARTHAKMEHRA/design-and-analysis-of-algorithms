#include<bits/stdc++.h>

using namespace std;

 int partition(int a[], int l, int h) {
 	int j = l;
 	for(int i = l; i < h; i++) {
 		if(a[i] <= a[h]) {
 			swap(a[i], a[j++]);
 		}
 	}
 	swap(a[h], a[j]);
 	return j;
 }

void quick(int a[], int l, int h) {

	if (l < h) {
		int p = partition(a, l, h);

		quick(a, l, p - 1);
		quick(a, p + 1, h);
	}
}

bool duplicate(int a[],int n){
	quick(a, 0, n - 1);

    for(int i = 1; i < n; i++) {
        if(a[i] == a[i - 1]) {
            return true;
        }
    }
    return false;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		if(duplicate(a, n))
            cout << "YES" << endl;
        else
    		cout << "NO" << endl;
	}

	return 0;
}