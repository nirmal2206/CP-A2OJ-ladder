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
    int n, m;
    cin >> n >> m;
    vi v(m);

    for (int &it : v)
        cin >> it;

    sort(v.begin(), v.end());
    int min = 0, max = 0, j = 0, temp = v[0];
    for (int i = 0; i < n; ++i)
    {
        min += temp;
        temp--;
        if (temp == 0)
            temp = v[++j];
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n; ++i)
    {
        max += v[0];
        v[0]--;
        for (j = 1; j < m; ++j)
        {
            if (v[j - 1] >= v[j])
                break;
            swap(v[j - 1], v[j]);
        }
    }
    cout << max << " " << min;
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