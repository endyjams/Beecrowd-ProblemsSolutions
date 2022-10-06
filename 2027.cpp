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

int gcd(int a, int b)
{
    if (b == 0) return a;
    
    return gcd(b, a%b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector <int> ans;
    int num, dem;
    
    while (cin >> num >> dem)
    {
        int x = gcd(num, dem);
        
        if (x > 5)
        {
            cout << "Noel" << '\n';
        } else {
            cout << "Gnomos" << '\n';
        }
        
        ans.PB(x);
    }
    
    for (int i = (int)ans.size()-1; i >= 0; i--) cout << ans[i] << " ";
    
    cout << '\n';

    return 0;
}