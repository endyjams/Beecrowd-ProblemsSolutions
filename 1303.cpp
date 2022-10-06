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

class cmp{
    public: bool operator() (pair<pii,pii> p1, pair<pii,pii> p2)
    {
        double avg1 = p1.S.S == 0 ? (double)p1.S.F : (double)p1.S.F/(double)p1.S.S;
        double avg2 = p2.S.S == 0 ? (double)p2.S.F : (double)p2.S.F/(double)p2.S.S;
        int pos1 = p1.F.S;
        int pos2 = p2.F.S;
        int pts1 = p1.F.F;
        int pts2 = p2.F.F;

        if (pts1 == pts2 && avg1 == avg2)
        {
            return p1.F.S < p2.F.S;
        }
        else if (pts1 == pts2)
        {
            if (p1.S.S == 0 && p2.S.S == 0)
            {
                return p1.S.F > p2.S.F;
            }
            else if (p1.S.S == 0)
            {
                return (double)p1.S.F > (double)p2.S.F/(double)p2.S.S;
            }
            else if (p2.S.S == 0)
            {
                return (double)p1.S.F/(double)p1.S.S > (double)p2.S.F;
            }

            return (double)p1.S.F/(double)p1.S.S > (double)p2.S.F/(double)p2.S.S;
        }

        return p1.F.F > p2.F.F;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int tst = 1;
    bool flag = true;

    while (cin >> n && n)
    {
        vector<pair<pii,pii>> v(n, make_pair(pii(0, 0), pii(0, 0)));

        for (int i = 0; i < (n*(n-1))/2; i++)
        {
            int t1, pt1, t2, pt2; cin >> t1 >> pt1 >> t2 >> pt2;
            t1--, t2--;

            if (pt1 > pt2) {
                v[t1].F.F += 2; 
                v[t2].F.F += 1;   
            } else {
                v[t2].F.F += 2;
                v[t1].F.F += 1;
            }

            v[t1].F.S = t1+1;
            v[t2].F.S = t2+1;
            v[t1].S.F += pt1;
            v[t1].S.S  += pt2;
            v[t2].S.F += pt2;
            v[t2].S.S += pt1;      
        }
        
        if (!flag) printf("\n");

        sort(v.begin(), v.end(), cmp());
        
        printf("Instancia %d\n%d", tst++, v[0].F.S); 

        for (int i = 1; i < n; i++)
        {
            printf(" %d", v[i].F.S);
        }
        
        printf("\n");
        
        flag = false;
    }

    return 0;
}