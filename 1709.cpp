#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int p = 2, ans = 1;
    
    while (p > 1)
    {
        p <= n/2 ? p += p : p -= n-p+1;
        
        ans++;
    }
    
    cout << ans << endl;
}