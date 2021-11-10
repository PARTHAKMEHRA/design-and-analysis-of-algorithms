#include <bits/stdc++.h>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; ++i)

using namespace std;

pii two_pointers(vector<int> a, int n) {
    int i=1,j=n-1;

    while(i<j) {
        if(a[i] + a[j] == a[n]) {
            return {i,j};
        }else if(a[i] + a[j] < a[n]) {
            i++;
        }else{
            j--;
        }
    }
    return {-1,-1};
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n++;
        vector<int> a(n);
        rep(i, 1, n) {
            cin >> a[i];
        }
        int f = -1;
        int s = -1;
        int k = -1;

        rep(i,3,n) {
            pii p = two_pointers(a,i);
            if(p.first != -1 && p.second != -1) {
                f = p.first;
                s = p.second;
                k = i;
                break;
            }
        }

        if (k != -1)
        {
            cout << f << "," << s << "," << k << endl;
        }
        else
            cout << "No sequence found" << endl;
    }
    return 0;
}