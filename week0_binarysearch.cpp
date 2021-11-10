#include<bits/stdc++.h>

using namespace std;

int binarySearch(int *a, int key, int l, int r){
	if(l>r)
		return -1;
	int mid = (l+r)/2;
	if(a[mid] == key){
		return mid;
	}
	if(key < a[mid]) {
		return binarySearch(a,key,l,mid-1);
	}
	if(key > a[mid]) {
		return binarySearch(a,key,mid+1,r);
	}
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
		int index = binarySearch(a,k,0,n-1);
		if(index == -1)
			cout<< "Not Found" <<endl;
		else
			cout<< index <<endl;
	}
	return 0;
}