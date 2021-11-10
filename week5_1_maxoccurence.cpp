#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> cnt(26);

        for(int i = 0; i < n; i++) {
            char c; cin >> c;
            cnt[c - 'a']++;
        }
        
        char c;
        int occ = 0;
        for(int i = 0; i < 26; i++) {
            if(cnt[i] > occ) {
                occ = cnt[i];
                c = 'a' + i;
            }
        }
        if(occ > 1) {
            cout << c << "-" << occ << endl;
        }else {
            cout << "No Duplicates Present" << endl;
        }
    }
    return 0;
}