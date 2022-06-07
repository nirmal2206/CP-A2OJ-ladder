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
    pii max_pos, min_pos;
    max_pos = {-1, 0};
    min_pos = {101, 0};
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x > max_pos.F)
        {
            max_pos = {x, i};
        }
        if (x <= min_pos.F)
        {
            min_pos = {x, i};
        }
    }
    // cout<<max_pos.S<<" "<<min_pos.S;
    int swaps = (max_pos.S - 0) + (n - 1 - min_pos.S);
    if (max_pos.S > min_pos.S)
    {
        cout << swaps - 1 << nl;
    }
    else
    {
        cout << swaps;
    }
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