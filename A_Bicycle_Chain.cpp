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
    int a;
    cin >> a;
    vi ax(a, 0);
    for (int &it : ax)
        cin >> it;

    int b;
    cin >> b;
    vi bx(b, 0);
    for (int &it : bx)
        cin >> it;

    int max = 0, cnt = 0;
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            if (bx[j] % ax[i] == 0)
            {
                int ratio = bx[j] / ax[i];
                if (ratio == max)
                    cnt++;
                if (ratio > max)
                {
                    max = ratio;
                    cnt = 1;
                }
            }
        }
    }
    cout << cnt;
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