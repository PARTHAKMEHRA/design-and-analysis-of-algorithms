#include <bits/stdc++.h>
#define ll long long int
#define rep(i, a, b) for (int i = a; i < b; ++i)

using namespace std;

int first_occ(vector<int> a, int n, int key)
{
    int ans = -1;
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (a[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int last_occ(vector<int> a, int n, int key)
{
    int ans = -1;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (a[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        rep(i, 0, n)
        {
            cin >> a[i];
        }
        int key;
        cin >> key;

        int l = first_occ(a, n, key);

        if (l != -1)
        {
            int r = last_occ(a, n, key);
            cout << key << "-" << (r - l + 1) << endl;
        }
        else
            cout << "Key not present" << endl;
    }
    return 0;
}