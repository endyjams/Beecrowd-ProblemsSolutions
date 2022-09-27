#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    
    while (t--)
    {
        double m = 0;
        int n; cin >> n;
        vector <int> v(n);
        double ans = 0;
        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m += v[i];
        }
        
        m /= v.size();
        
        for (int i = 0; i < n; i++) if (v[i] > m) ans++;
        
        (ans /= v.size()) *= 100; 
        
        cout << fixed << setprecision(3) << ans << "%" << endl;
    }
    
    return 0;
}