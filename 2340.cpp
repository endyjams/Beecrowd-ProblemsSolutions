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
    int n;

    while (cin >> n)
    {
        vector<pair<ll,int>> v(n);
        int ans = 0;
        double actual = 0;
        
        for (int i = 0; i < n; i++)
        {
            int d, c; cin >> d >> c;
            double b = (double)log(d)*c;
            
            if (b > actual)
            {
                actual = b;
                ans = i;
            }
        }
    
        cout << ans << '\n';
    }

    return 0;
}