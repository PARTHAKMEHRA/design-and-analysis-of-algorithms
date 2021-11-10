#include<bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m;
    unordered_map<int, int> a(m);
    for(int i=0; i < m; i++) {
        int data; cin >> data;
        a[data]++;
    }
    cin >> n;
    unordered_map<int, int> b(n);
    for(int i=0; i < n; i++) {
        int data; cin >> data;
        b[data]++;
    }
    vector<int> ans;
    for(auto &it: a) {
        if(b[it.first] != 0) {
            int i = min(b[it.first], it.second);
            while(i--) ans.push_back(it.first);
        }
    }
    for(auto &it: ans) {
        cout << it << " ";
    }cout << endl;

    return 0;
}