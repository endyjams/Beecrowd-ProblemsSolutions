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
int n, m;
int pai[1001], peso[1001];

void init()
{
    for (int i = 0; i <= n; i++)
    {
        peso[i] = 1;
        pai[i] = i;
    }
}

int find(int x)
{
    if (pai[x] == x) return x;
    
    return find(pai[x]);
}

void union_find(int u, int v)
{
    if (u == v) return;
    
    u = find(u);
    v = find(v);
    
    if (peso[u] > peso[v])
    {
        pai[v] = u;
        peso[u] += peso[v];
    } else {
        pai[u] = v;
        peso[v] += peso[u];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst = 1;
    
    while (cin >> n >> m)
    {
        init();
        vector <pair<int,pii>> v(m);
        
        for (int i = 0; i < m; i++) cin >> v[i].S.F >> v[i].S.S >> v[i].F;
        
        sort(v.begin(), v.end());
        
        ll ans = 0;
        
        for (int i = 0; i < m; i++)
        {
            int u = find(v[i].S.F);
            int v1 = find(v[i].S.S);
            int w = v[i].F;
            
            if (u != v1)
            {
                ans += w;
                union_find(u, v1);
            }
        }
        
        printf("Instancia %d\n", tst++);
        printf("%lld\n\n", ans);
    }

    return 0;
}