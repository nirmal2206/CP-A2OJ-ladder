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
    string s;
    cin >> s;
    int n = s.size();
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == '1')
            c1++;
        else if (s[i] == '2')
            c2++;
        else
            c3++;
    }
    string ans = "";
    while (c1--)
        ans += "1+";
    while (c2--)
        ans += "2+";
    while (c3--)
        ans += "3+";
    ans.pop_back();
    cout << ans;
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