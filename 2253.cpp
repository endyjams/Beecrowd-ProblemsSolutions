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
    char s[100];
    
    while (cin.getline(s,100))
    {
        int x = 0, y = 0, z = 0;
        int sz = 0;
        bool ok = true;
        
        for (int i = 0; i < 100 && s[i] != '\0'; i++)
        {
            if (isupper(s[i]))
            {
                x++;
            }
            else if (islower(s[i]))
            {
                y++;
            }
            else if (isdigit(s[i]))
            {
                z++;
            } else {
                ok = false;
            }
            
            
            sz = i;
        }
        
        x >= 1 && y >= 1 && z >= 1 && sz >= 5 && sz <= 31 && ok ? cout << "Senha valida." << '\n' : cout << "Senha invalida." << '\n';
    }
    
    return 0;
}