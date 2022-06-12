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
    int n, m;
    cin >> n >> m;
    vi v(n);
    for (int &it : v)
        cin >> it;

    sort(v.begin(), v.end());

    int ans = 0;
    if (v[0] >= 0)
    {
        cout << 0;
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        if (v[i] < 0 && m > 0)
        {
            ans -= v[i];
            m--;
        }
    }
    cout << ans;
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