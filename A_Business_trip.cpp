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
    int k;
    cin >> k;
    vi a(12, 0);
    int sum = 0, ans = 0;
    for (int i = 0; i < 12; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum < k)
    {
        cout << -1;
        return;
    }
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < 12; ++i)
    {
        if (k > 0)
        {
            k -= a[i];
            ans++;
        }
        else
            break;
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