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
    char s[210]; cin.getline(s,210);

    w(t)
    {
        cin.getline(s,210);
        vector<int>v(26,0);
        
        for (int i = 0; i < 210 && s[i] != '\0'; i++)
        {
            v[(int)((int)tolower(s[i]) - (int)'a')]++;
        }
        
        set<pair<int,char>>se;
        int maxx = 0;
        
        for (int i = 0; i < 26; i++) if (v[i] > maxx) maxx = v[i];
        
        for (int i = 0; i < 26; i++)
        {
            if (v[i] == maxx) cout << (char)(i+(int)'a');
        }
        
        cout << '\n';
    }
    
    return 0;
}