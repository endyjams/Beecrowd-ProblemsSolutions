#include <bits/stdc++.h>
using namespace std;
vector <int> adj[1001];
int grau[1001];
int n;

void init()
{
    for (int i = 0; i <= 1000; i++) adj[i].clear();
    memset(grau, 0, sizeof(grau));
}

int solve()
{
    queue<int> q;

    for (int i = 1; i <= n; i++) if (grau[i] == 0) q.push(i);

    int ans = 0;

    while (!q.empty())
    {
        ans++;
        
        queue <int> q2;
        
        while (!q.empty())
        {
            q2.push(q.front());
            q.pop();
        }
        
        while (!q2.empty())
        {
            int v = q2.front();
            q2.pop();
            
            for (int u : adj[v])
            {
                grau[u]--;
                
                if (grau[u] == 0) q.push(u);
            }
        }
    }

    for (int i = 1; i <= n; i++) if (grau[i] != 0) return -1;

    return ans;
}

int main()
{
    while (scanf("%d", &n) != EOF)
    {
        init();
        
        for (int u = 1; u <= n; u++)
        {
            int t; scanf("%d", &t);
            
            while (t--)
            {
                int v; scanf("%d", &v);
                adj[v].push_back(u);
                grau[u]++;
            }
        }
        
        cout << solve() << endl;
    }

    return 0;
}