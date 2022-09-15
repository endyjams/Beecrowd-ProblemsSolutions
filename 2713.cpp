#include <bits/stdc++.h>
using namespace std;
typedef pair<double,double> pdd;

double min(double a, double b)
{
    return a < b ? a : b;
}

int main()
{
    int n, k, D;
    
    while (cin >> n >> k >> D)
    {
        vector <pdd> v(n);
        double dp[n+1][k+1];
        memset(dp, 0, sizeof(dp));
        
        for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                double f = dp[i-1][j]+(v[i-1].first/(double)D);
                double s = dp[i-1][j-1]+(v[i-1].first/((double)D+v[i-1].second));
                
                if (j == 0) dp[i][j] = f;
                else dp[i][j] = min(f,s);
            }
        }
        
        cout << fixed << setprecision(4) << dp[n][k] << endl;
    }
    
    return 0;
}