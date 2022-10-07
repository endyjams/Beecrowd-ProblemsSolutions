#include <bits/stdc++.h>
using namespace std;

int solve(string a, string b)
{
    int n = (int)a.size(), m = (int)b.size();
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0)
            {
                dp[i][j] = j;
            }
            else if (j == 0)
            {
                dp[i][j] = 1;
            }
            else if (a[i-1] == b[j-1])
            {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]);
            }
        }
    }
    
    return dp[n][m];
}

int main()
{
    int t; cin >> t;
    vector <int> ans;
    vector <pair<double,int>> final_points(5);

    for (int i = 0; i < 5; i++)
    {
        final_points[i].first = 0;
        final_points[i].second = i+1;
    }

    while (t--)
    {
        string s; cin >> s;

        vector <string> words(5);

        for (int i = 0; i < 5; i++) cin >> words[i];

        vector <pair<int,int>> rodada(5);

        for (int i = 0; i < 5; i++)
        {
            rodada[i].first = 0;
            rodada[i].second = i;
        }

        for (int i = 0; i < 5; i++)
        {
            rodada[i].first = solve(words[i], s);
        }

        sort(rodada.begin(), rodada.end());

        int x = rodada[0].first;

        if (x == 0)
        {
            for (int i = 0; i < 5; i++) if (rodada[i].first == x) final_points[rodada[i].second].first += 1.0;
        } else {
            for (int i = 0; i < 5; i++) if (rodada[i].first == x) final_points[rodada[i].second].first += 0.5;
        }
    }

    sort(final_points.begin(), final_points.end(), greater<pair<double,int>>());

    double x = final_points[0].first;
    
    cout << fixed << setprecision(1) << x << endl;
    
    for (int i = 0; i < 5; i++) if (final_points[i].first == x) ans.push_back(final_points[i].second);

    sort(ans.begin(), ans.end());
    
    for (int i = 0; i < ans.size(); i++)
    {
        if (!i) cout << ans[i];
        else cout << " " << ans[i];
    }
    
    cout << '\n';

    return 0;
}