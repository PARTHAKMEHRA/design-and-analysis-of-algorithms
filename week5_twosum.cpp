#include<bits/stdc++.h>
#define pii pair<int, int>

using namespace std;

pii two_Sum(vector<int> &a, int n, int key) {
    sort(a.begin(), a.end());
    int i = 0;
    int j = n - 1;
    while(i < j) {
        if(a[i] + a[j] == key) {
            return {a[i], a[j]};
        }else if(a[i] + a[j] > key) {
            j--;
        }else {
            i++;
        }
    }
    return {-1, -1};
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int key; cin >> key;
        
        pii p = two_Sum(a, n, key);
        if(p.first != -1 || p.second != -1) {
            cout << p.first << " " << p.second << endl;
        }else {
            cout << "No Duplicates Present" << endl;
        }
    }
    return 0;
}