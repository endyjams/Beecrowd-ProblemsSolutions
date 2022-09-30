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
    char s[110], s1[110], s2[110];
    int tst = 1; cin.getline(s, 110);
    
    w(t)
    {
        cin.getline(s, 110);
        cin.getline(s1, 110);
        cin.getline(s2, 110);
        
        int p1 = 0, p2 = 0;
        int fs1 = 110, fs2 = 110;
        
        for (int i = 0; i < 110 && s[i] != '\0'; i++)
        {
            if (s[i] == s1[i])
            {
                p1++;
            }
            
            if (s2[i] == s[i])
            {
                p2++;
            }
            
            if (s1[i] == s[i] && s2[i] != s[i])
            {
                fs1 = min(fs1, i);
            }
            else if (s1[i] != s[i] && s2[i] == s[i])
            {
                fs2 = min(fs2, i);
            }
        }
        
        printf("Instancia %d\n", tst++);
        
        if (p1 > p2)
        {
            printf("time 1\n\n");
        } else {
            if (p2 > p1)
            {
                printf("time 2\n\n");
            } else {
                if (fs1 == fs2)
                {
                    printf("empate\n\n");
                } else {
                    if (fs1 < fs2)
                    {
                        printf("time 1\n\n");
                    } else {
                        printf("time 2\n\n");
                    }
                }
            }
        }
    }
    
    return 0;
}