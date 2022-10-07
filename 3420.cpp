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
    
    while (t--)
    {
        ull x; cin >> x;
        
        ull l = 0, r = 1e9, m;
        ull sum1, final_sum;
        
        while (l <= r)
        {
            m = (l + r) / 2;
            sum1 = ((2 + 2*m) * m) / 2;
            final_sum = (((m-1) * (m)) / 2) + sum1;
            
            if (final_sum <= x)
            {
                l = m+1;
            } else {
                r = m-1;
            }
        }
        
        cout << r << endl;
    }

    return 0;
}