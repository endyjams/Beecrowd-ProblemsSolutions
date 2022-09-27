#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int mod;
    
    while (scanf("%d", &mod) != EOF)
    {
        ll num = 1;
        int ans = 1;
        
        while (num % mod)
        {
            ((num *= 10) += 1) %= mod;
            ans++;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}