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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    for (int i = 0; i < n; ++i)
    {
        char low_a, low_b;
        if (tolower(a[i]) > tolower(b[i]))
        {
            cout << 1;
            return;
        }
        else if (tolower(a[i]) < tolower(b[i]))
        {
            cout << -1;
            return;
        }
    }
    cout << 0;
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