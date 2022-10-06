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
bool visited[1001];
bool mc[1001];
vector <int> adj[1001];
int n, m;

void init()
{
    memset(visited, false, sizeof(visited));
    memset(mc, false, sizeof(mc));
    for (int i = 0; i <= 1000; i++) adj[i].clear();
}

void dfs(int v)
{
    visited[v] = true;
    
    for (int u : adj[v])
    {
        if (!visited[u])
        {
            dfs(u);
        }
        
        if (!mc[u])
        {
            mc[v] = !mc[v];
            mc[u] = !mc[u];
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while (cin >> n >> m)
    {
        init();
        
        for (int i = 1; i <= n; i++)
        {
            char c; cin >> c;
            mc[i] = (c == 'A') ? true : false;
        }
        
        for (int i = 0; i < m; i++)
        {
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for (int i = 1; i <= n; i++) if (!visited[i]) dfs(i);
        
        bool ok = true;
        
        for (int i = 1; i <= n; i++) if (!mc[i]) ok = false;
        
        ok ? cout << 'Y' << '\n' : cout << 'N' << '\n';
    }

    return 0;
}