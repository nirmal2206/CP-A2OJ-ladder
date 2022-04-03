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
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        int i = 0;
        while (i < n - 1)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                char tmp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = tmp;
                i += 2;
            }
            else
            {
                i++;
            }
        }
    }
    cout << s << nl;
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