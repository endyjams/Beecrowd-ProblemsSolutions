#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int INF = 1e6;
int n, m;
vector <pii> adj[101];
int dist[101];
bool visited[101];

void init()
{
    for (int i = 0; i <= 100; i++) adj[i].clear();
}

int dijkstra(int u, int v)
{
    memset(dist, INF, sizeof(dist));
    memset(visited, false, sizeof(visited));
    
    priority_queue<pii, vector<pii>, greater<pii>> q;
    
    dist[u] = -INF;
    
    q.push(pii(dist[u], u));
    
    while (true)
    {
        int w = -1;
        
        while (!q.empty())
        {
            int h = q.top().second;
            q.pop();
            
            if (!visited[h])
            {
                w = h;
                break;
            }
        }
        
        if (w == -1) break;
        
        visited[w] = true;
        
        for (int i = 0; i < adj[w].size(); i++)
        {
            if (dist[adj[w][i].first] > max(dist[w], adj[w][i].second))
            {
                dist[adj[w][i].first] = max(dist[w], adj[w][i].second);
                
                q.push(pii(dist[adj[w][i].first], adj[w][i].first));
            }
        }
    }
    
    dist[u] = 0;
    
    return dist[v];
}

int main()
{
    int test = 1;
    
    while (cin >> n >> m && (n || m))
    {
        init();
        
        for (int i = 0; i < m; i++)
        {
            int u, v, w; cin >> u >> v >> w;
            adj[u].push_back(pii(v,w));
            adj[v].push_back(pii(u,w));
        }
        
        int q; cin >> q;
        
        printf("Instancia %d\n", test++);
        
        while (q--)
        {
            int u, v; cin >> u >> v;
            
            cout << dijkstra(u, v) << endl;
        }
        
        cout << endl;
    }
    return 0;
}