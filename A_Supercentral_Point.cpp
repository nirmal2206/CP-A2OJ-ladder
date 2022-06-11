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
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        vp.pb(mp(x, y));
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        bool up = false, low = false, right = false, left = false;
        for (int j = 0; j < n; ++j)
        {
            if (vp[j].F > vp[i].F && vp[j].S == vp[i].S)
                right = true;
            else if (vp[j].F < vp[i].F && vp[j].S == vp[i].S)
                left = true;
            else if (vp[j].F == vp[i].F && vp[j].S < vp[i].S)
                low = true;
            else if (vp[j].F == vp[i].F && vp[j].S > vp[i].S)
                up = true;
        }
        if (up && low && right && left)
            ans++;
    }
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