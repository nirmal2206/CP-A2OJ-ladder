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

bool isPrime(int p)
{
    for (int i = 2; i * i <= p; ++i)
    {
        if (p % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = n + 1; i <= m; ++i)
    {
        if (isPrime(i))
        {
            if (i == m)
                cout << "YES\n";
            else
                cout << "NO\n";
            return;
        }
    }
    cout << "NO\n";
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