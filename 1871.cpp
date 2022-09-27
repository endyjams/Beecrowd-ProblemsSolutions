#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll x)
{
    vector <int> v;
    ll ans = 0;
    
    while (x)
    {
        if(x%10 != 0) v.push_back(x%10);
        x/=10;
    }
    
    for (int i = v.size()-1; i >= 0; i--)
    {
        ans *= 10;
        ans += v[i];
    }
    
    return ans;
}

int main()
{
    ll m, n;
    
    while (cin >> m >> n && (m || n))
    {
        cout << solve(m+n) << endl;    
    }
    
    return 0;
}