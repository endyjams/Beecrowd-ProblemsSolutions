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
const int INF = 1e7;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;

    while (cin >> n >> k)
    {
        int ans = INF;
        vector <int> v(k+1, 0);
        
        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            v[a]++;
        }
        
        for (int i = 1; i <= k; i++) ans = min(ans, v[i]);
        
        cout << ans << '\n';
    }

    return 0;
}