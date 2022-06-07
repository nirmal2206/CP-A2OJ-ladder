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
    int i, k, l, m, n, d, res = 0;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    int arr[d];
    for (i = 0; i < d; i++)
    {
        arr[i] = 0;
    }
    for (i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            arr[i - 1] = 1;
        }
    }

    for (i = 0; i < d; i++)
    {
        if (arr[i] == 1)
            res++;
    }

    cout << res;
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