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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    
    vector <int> v(n+1, 0);
    
    bool ok = true;
    
    for (int i = 0; i < n; i++) cin >> v[i];
    
    sort(v.begin(), v.end(), greater<int>());
    
    for (int i = 1; i <= n; i++) if (v[i-1] - v[i] > 8) ok = false;
    
    ok ? printf("S\n") : printf("N\n");

    return 0;
}