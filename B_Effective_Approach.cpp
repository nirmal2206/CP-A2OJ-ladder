#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;


#define pb push_back
#define mp make_pair
#define F first
#define S second
#define nl "\n"

void solve(){
    int n;
    cin>>n;
    vi arr, arr_cpy(n+1,-1);
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        arr.pb(x);
        arr_cpy[x]=i;
    }
    int q;
    cin>>q;
    ll v=0,p=0;
    for(int i=0;i<q;++i){
        int x;
        cin>>x;
        v+=arr_cpy[x]+1;
        p+=n-arr_cpy[x];
    }
    cout<<v<<" "<<p;
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