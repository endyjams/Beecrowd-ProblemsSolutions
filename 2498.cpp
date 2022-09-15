#include <bits/stdc++.h>
using namespace std;
int arr[1001][101];
typedef pair<int,int> pii;

int main()
{
    int n, c, tst = 1;
    
    while (cin >> n >> c && (n || c))
    {
        memset(arr, 0, sizeof(arr));
        vector <pii> v(n);
        
        for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= c; j++)
            {
                if (j >= v[i-1].first)
                {
                    arr[i][j] = max(arr[i-1][j], arr[i-1][j-v[i-1].first] + v[i-1].second);
                } else {
                    arr[i][j] = arr[i-1][j];
                }
            }
        }
        
        printf("Caso %d: %d\n", tst++, arr[n][c]);
    }
    
    return 0;
}