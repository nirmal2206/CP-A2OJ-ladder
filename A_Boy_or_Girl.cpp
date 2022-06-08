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
    set<char> st(s.begin(), s.end());
    if (st.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
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