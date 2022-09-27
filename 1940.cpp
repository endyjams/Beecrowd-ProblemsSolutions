#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int main()
{
    int j, r; cin >> j >> r;
    vector <pii> v(j);
    
    for (int i = 0; i < j; i++) v[i] = pii(0, i+1);
    
    for (int i = 0; i < r; i++)
    {
        for (int k = 0; k < j; k++)
        {
            int x; cin >> x;
            v[k].first += x;
        }
    }
    
    sort(v.begin(), v.end(), greater<pii>());
    
    cout << v[0].second << endl;
    
    return 0;
}