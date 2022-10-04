#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll; //-9 * 10^18 to 9 * 10^18
typedef int64_t ull;
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
ull MOD = 1000000007;

//Modular multiplicative inverse with Euclidean algorithm

ull mdc(ull a, ull b, ull *x, ull *y)
{
    ull xx, yy, d;
    
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
    
    d = mdc(b, a%b, &xx, &yy);
    *x = yy;
    *y = xx - a/b*yy;
    return d;
}

ull inv(ull a)
{
    ull x, y, d;
    d = mdc(a, MOD, &x, &y);
    
    if (x < 0) x += MOD;
    
    return x;
}

ull solve(string s)
{
    int alpha[26];
    memset(alpha, 0, sizeof(alpha));
    int sz = (int)s.size();
    
    for (int i = 0; i < sz; i++) alpha[(int)(s[i]-'A')]++;
    
    ull den = 1;
    ull fat[1003];
    fat[0] = fat[1] = 1;
    
    for (int i = 2; i < 1003; i++)
    {
        fat[i] = fat[i-1] * i;
        fat[i] %= MOD;
    }
    
    for (int i = 0; i < 26; i++)
    {
        den *= fat[alpha[i]];
        den %= MOD;
    }
    
    //den * x % MOD = 1
    return (fat[sz]*inv(den)) % MOD;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    
    while (cin >> s)
    {
        cout << solve(s) << '\n';
    }

    return 0;
}