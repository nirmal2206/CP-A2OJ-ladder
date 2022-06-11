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

    vi v(n, 0);

    for (int &it : v)
        cin >> it;

    int idx1 = 1, idx2 = n, min = abs(v[0] - v[n - 1]);

    for (int i = 0; i < n - 1; ++i)
    {
        if (abs(v[i] - v[i + 1]) < min)
        {
            min = abs(v[i] - v[i + 1]);
            idx1 = i + 1;
            idx2 = i + 2;
        }
    }
    cout << idx1 << " " << idx2;
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