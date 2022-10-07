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
const int MAXN = 300010;
int n, m;
char ans[MAXN];
bool visited[MAXN];
vector <int> adj[MAXN];

void dfs(int v)
{
    ans[v] = 'B';
    visited[v] = true;
    
    for (int u : adj[v])
    {
        if (!visited[u])
        {
            dfs(u);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    scanf("%d %d", &n, &m);

    memset(visited, false, sizeof(visited));
    memset(ans, 'A', sizeof(ans));

    for (int i = 0; i < m; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u].PB(v);
        adj[v].PB(u);
    }
    
    visited[n] = true;

    dfs(n-1);

    for (int i = 1; i <= n; i++) printf("%c", ans[i]);

    printf("\n");

    return 0;
}