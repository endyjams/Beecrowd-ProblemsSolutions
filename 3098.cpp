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
string s;
int dp[1010][1010];

int solve(int i, int j)
{
    if (i > j) return 0;
    
    if (dp[i][j] != -1) return dp[i][j];
    
    if (i == j && s[i] != 'a') return dp[i][j] = 1 + max(max(solve(i+1, j-1), solve(i+1, j)), solve(i, j-1));
    
    if (s[i] == s[j] && s[i] != 'a') return dp[i][j] = max(max(2 + solve(i+1, j-1), solve(i+1, j)), solve(i, j-1));
    
    return dp[i][j] = max(max(solve(i+1, j-1), solve(i+1, j)), solve(i, j-1));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> s;
    
    int sz = s.size();
    
    memset(dp, -1, sizeof(dp));
    
    cout << solve(0, sz-1) << '\n';

    return 0;
}