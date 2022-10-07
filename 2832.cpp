#include <bits/stdc++.h>
using namespace std;
typedef long long ll; //-9 * 10^18 to 9 * 10^18
typedef unsigned long long int ull; //very big positive integer
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<pll> vpll;
typedef vector<pii> vpii;
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define REP(i,a,b) for(int i = a; i < b; i++)
#define w(t) while(t--)
vector <int> v;

ll solve(int d)
{
    ll m = 0;
    
    for (int i = 0; i < (int)v.size(); i++)
    {
        m += d/v[i];
    }
    
    return m;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, f; cin >> n >> f;
    v.assign(n, 0);
    
    for (int i = 0; i < n; i++) cin >> v[i];
    
    ll l = 0, r = 1e9;
    
    while (l < r)
    {
        int m = (l+r)/2;
        
        if (solve(m) >= f)
        {
            r = m;
        } else {
            l = m+1;
        }
    }
    
    cout << l << '\n';

    return 0;
}