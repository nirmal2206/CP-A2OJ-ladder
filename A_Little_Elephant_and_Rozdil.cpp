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
    int min = INT_MAX, cnt = 0, x, city = -1;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x < min)
        {
            min = x;
            cnt = 1;
            city = i + 1;
        }
        else if (x == min)
        {
            cnt++;
        }
    }
    if (cnt != 1)
        cout << "Still Rozdil";
    else
        cout << city;
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