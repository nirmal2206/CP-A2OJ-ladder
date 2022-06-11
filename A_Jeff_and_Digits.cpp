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
    int cnt0 = 0, cnt5 = 0, x;
    while (n--)
    {
        cin >> x;
        if (x == 5)
            cnt5++;
        else
            cnt0++;
    }
    int possible_fives = cnt5 / 9;
    string ans = "";
    if (cnt0 == 0)
    {
        cout << -1;
        return;
    }
    if (possible_fives != 0)
    {
        while (possible_fives--)
            ans += "555555555";
        while (cnt0--)
            ans += "0";
    }
    else
    {
        cout << 0;
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