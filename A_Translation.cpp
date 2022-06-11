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
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size())
    {
        cout << "NO";
        return;
    }
    int n = s1.size();
    for (int i = 0; i < n; ++i)
    {
        if (s1[i] != s2[n - 1 - i])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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