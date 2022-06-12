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
    int k;
    string s;
    cin >> k >> s;
    vi v(26, 0);
    for (int i = 0; i < s.size(); ++i)
    {
        v[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; ++i)
    {
        if (v[i] != 0 && v[i] % k != 0)
        {
            cout << -1;
            return;
        }
    }
    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < 26; ++j)
        {
            if (v[j] != 0)
            {
                int times = v[j] / k;
                while (times--)
                    cout << (char)(j + 'a');
            }
        }
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