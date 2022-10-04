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
    
    int a, b, c; cin >> a >> b >> c;
    int ans;
    
    if (a > b && b <= c)
    {
        ans = 1;
    }
    else if (a < b && b >= c)
    {
        ans = 0;
    }
    else if (a < b && b < c && (c-b) < (b-a))
    {
        ans = 0;
    }
    else if (a < b && b < c && (c-b) >= (b-a))
    {
        ans = 1;
    }
    else if (a > b && b > c && (b-c) < (a-b))
    {
        ans = 1;
    }
    else if (a > b && b > c && (b-c) >= (a-b))
    {
        ans = 0;
    }
    else if (a == b && b < c)
    {
        ans = 1;
    }
    else if (a == b && b > c)
    {
        ans = 0;
    }
    
    
    ans ? cout << ":)" << '\n' : cout << ":(" << '\n';

    return 0;
}