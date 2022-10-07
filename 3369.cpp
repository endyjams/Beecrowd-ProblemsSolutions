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

    int n; cin >> n;

    vector <string> v(n);
    
    bool flag = false;
    
    for (int i = 0; i < n; i++) cin >> v[i];
    
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        
        for (int j = 0; j < n; j++)
        {
            if (v[i][k] == v[j][0])
            {
                k++;
                j = -1;
            }
        }
        
        if (k == v[i].size())
        {
            flag = true;
            break;
        }
    }
    
    flag ? cout << "Y" << endl : cout << "N" << endl;
    
    return 0;
}