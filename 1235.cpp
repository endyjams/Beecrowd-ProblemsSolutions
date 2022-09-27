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
    char s[101];
    cin.getline(s, 101);
    
    w(t)
    {
        cin.getline(s, 101);
        
        int first, second;
        
        for (int i = 0; i < 100 && s[i] != '\0'; i++) second = i;
        
        first = second/2;
        
        for (int i = first; i >= 0; i--) cout << s[i];
        for (int i = second; i > first; i--) cout << s[i];
        
        cout << '\n';
    }

    return 0;
}