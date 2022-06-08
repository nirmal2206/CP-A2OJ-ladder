#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define nl "\n"

void solve()
{
    int n;
    cin >> n;
    int lc0 = 0, lc1 = 0, rc0 = 0, rc1 = 0;
    for (int i = 0; i < n; ++i)
    {
        int l, r;
        cin >> l >> r;
        if (l)
            lc1++;
        else
            lc0++;
        if (r)
            rc1++;
        else
            rc0++;
    }
    int ans = min(lc0, lc1) + min(rc0, rc1);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}