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

class cmp
{
    public: bool operator() (pair<int,string> p1, pair<int,string> p2)
    {
        if (p1.F == p2.F) return p1.S > p2.S;
        
        return p1.F < p2.F;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int tst = 1;
    
    while (cin >> n)
    {
        vector <pair<int,string>> v(n);
        
        for (int i = 0; i < n; i++) cin >> v[i].S >> v[i].F;
        
        sort(v.begin(), v.end(), cmp());
        
        cout << "Instancia " << tst++ << '\n';
        cout << v[0].S << '\n' << '\n';
    }

    return 0;
}