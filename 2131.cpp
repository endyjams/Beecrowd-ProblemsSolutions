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
vector <int> adj[101];
int l[101];
bool visited[101];
int n, m;

void init()
{
    for (int i = 0; i <= n; i++) adj[i].clear();
    memset(l, 0, sizeof(l));
    memset(visited, false, sizeof(visited));
}

void dfs(int v)
{
    visited[v] = true;
    
    for (int u : adj[v])
    {
        l[u] = !l[v];
        
        if (!visited[u]) dfs(u);
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
        bool ok = true;
        
        for (int i = 0; i < m; i++)
        {
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for (int i = 0; i <= n; i++)
        {
            if (!visited[i]) dfs(i);
        }
        
        for (int v = 1; v <= n; v++)
        {
            for (int u : adj[v])
            {
                if (l[v] == l[u])
                {
                    ok = false;
                    break;
                }
            }
        }
        
        printf("Instancia %d\n", tst++);
        ok ? printf("sim\n\n") : printf("nao\n\n");
    }

    return 0;
}