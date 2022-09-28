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
    vector<string>v(t);

    for (int i = 0; i < t; i++) cin >> v[i];

    for (int i = 0; i < t; i++)
    {
        if (i) cout << " ";
        
        if ((v[i][0] == 'O' && v[i][1] == 'B') && v[i].size() == 3)
        {
            cout << "OBI";
        }
        else if ((v[i][0] == 'U' && v[i][1] == 'R') && v[i].size() == 3)
        {
            cout << "URI";
        } else {
            cout << v[i];
        }
    }
    
    cout << '\n';

    return 0;
}