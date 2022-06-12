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

    int ans = 0;
    if (n >= m)
    {
        for (int a = 0; a * a <= n; ++a)
        {
            int b = n - (a * a);
            if (a + (b * b) == m)
                ans++;
        }
    }
    else
    {
        for (int b = 0; b * b <= m; ++b)
        {
            int a = m - (b * b);
            if ((a * a) + b == n)
                ans++;
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