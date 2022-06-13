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
    ll s, n, i;
    cin >> s >> n;
    vector<pii> v;
    for (i = 0; i < n; ++i)
    {
        ll x, y;
        cin >> x >> y;
        v.pb(mp(x, y));
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n; ++i)
    {
        if (v[i].F < s)
        {
            s += v[i].S;
        }
        else
        {
            break;
        }
    }
    if (i == n)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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