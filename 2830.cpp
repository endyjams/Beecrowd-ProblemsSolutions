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

int solve(int x, int y, int d) {return x/d == y/d;}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k, l; cin >> k >> l;
    k--, l--;
    
    solve(k, l, 2) ? cout << "oitavas" : solve(k, l, 4) ? cout << "quartas" : solve(k, l, 8) ? cout << "semifinal" : cout << "final";
    
    cout << '\n';

    return 0;
}