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
    string a, b, c;
    cin >> a >> b >> c;
    unordered_map<char, int> cnt_ab, cnt_c;
    for (int i = 0; i < a.size(); ++i)
    {
        cnt_ab[a[i]]++;
    }
    for (int i = 0; i < b.size(); ++i)
    {
        cnt_ab[b[i]]++;
    }
    for (int i = 0; i < c.size(); ++i)
    {
        cnt_c[c[i]]++;
    }
    if (a.size() + b.size() != c.size())
    {
        cout << "NO\n";
        return;
    }
    for (auto it : cnt_ab)
    {
        if (cnt_c[it.F] != it.S)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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