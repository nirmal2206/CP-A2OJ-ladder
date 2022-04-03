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
    vector<vector<bool>> ans(3, vector<bool>(3, true));
    vector<vi> v(3, vector<int>(3, 0));
    int x;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> x;
            if (x % 2)
            {
                v[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (v[i][j])
            {
                ans[i][j] = !ans[i][j];
                if (i > 0)
                    ans[i - 1][j] = !ans[i - 1][j];
                if (j > 0)
                    ans[i][j - 1] = !ans[i][j - 1];
                if (i < 2)
                    ans[i + 1][j] = !ans[i + 1][j];
                if (j < 2)
                    ans[i][j + 1] = !ans[i][j + 1];
            }
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << ans[i][j];
        }
        cout << nl;
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