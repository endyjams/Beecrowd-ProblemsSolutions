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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    w(t)
    {
        int x; cin >> x;
        int l = 0;
        int ans = 0;

        w(x)
        {
            string s; cin >> s;
            
            for (int i = 0; i < s.size(); i++)
            {
                ans += ((int)s[i]-(int)'A') + l + i;
            }

            l++;
        }

        cout << ans << '\n';
    }

    return 0;
}