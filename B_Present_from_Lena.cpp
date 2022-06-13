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
    // UPPER HALF
    for (int i = 0; i <= n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            cout << "  ";
        }
        for (int k = 0; k <= i; k++)
        {
            if (i == 0)
                cout << i;
            else
                cout << k << " ";
        }
        for (int k = i - 1; k >= 0; k--)
        {
            if (k == 0)
                cout << k;
            else
                cout << k << " ";
        }
        cout << nl;
    }
    // LOWER HALF
    for (int i = n - 1; i >= 0; --i)
    {
        for (int j = i; j < n; ++j)
        {
            cout << "  ";
        }
        for (int k = 0; k <= i; k++)
        {
            if (i == 0)
                cout << i;
            else
                cout << k << " ";
        }
        for (int k = i - 1; k >= 0; k--)
        {
            if (k == 0)
                cout << k;
            else
                cout << k << " ";
        }
        cout << nl;
    }
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