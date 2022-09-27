#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    
    while (t--)
    {
        string s; cin >> s;
        int x; cin >> x;
        
        for (int i = 0; i < s.size(); i++)
        {
            s[i] -= x;
            if (s[i] < 'A') s[i] = s[i] - 'A' + 'Z' + 1;
        }
        
        cout << s << endl;
    }
    
    return 0;
}