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
    ll n;
    cin >> n;
    ll max = INT_MIN, max_cnt = 0, min = INT_MAX, min_cnt = 0;
    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        if (x < min)
        {
            min = x;
            min_cnt = 1;
        }
        else if (x == min)
        {
            min_cnt++;
        }
        if (x > max)
        {
            max = x;
            max_cnt = 1;
        }
        else if (x == max)
        {
            max_cnt++;
        }
    }
    ll max_diff = max - min;
    ll combination;
    if (max_diff != 0)
    {
        combination = max_cnt * min_cnt;
    }
    else
    {
        if (max_cnt % 2 == 0)
        {
            combination = (max_cnt / 2) * (max_cnt - 1);
        }
        else
        {
            combination = (max_cnt) * ((max_cnt - 1) / 2);
        }
    }
    cout << max_diff << " " << combination;
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