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

bool is_p(int x)
{
    if (x == 0 || x == 1) return false;
    
    for (int i = 2; i <= sqrt(x); i++) if (x % i == 0 && x != i) return false;
    
    return true;
}

int minp(int x)
{
    for (int i = x; i >= 0; i--) if (is_p(i)) return i;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m; cin >> n >> m;
    
    cout << minp(n)*minp(m) << '\n';
    
    return 0;   
}