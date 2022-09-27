#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(string a, string b)
{
    if (b.size() > a.size()) return false;
    
    for (int i = a.size()-1, j = b.size()-1; i >= 0 && j >= 0; i--,j--)
    {
        if (a[i] != b[j]) return false;
    }
    
    return true;
}

int main()
{
    int t; cin >> t;
    
    while (t--)
    {
        string a, b; cin >> a >> b;
        
        solve(a, b) ? cout << "encaixa" << endl : cout << "nao encaixa" << endl;
    }
    return 0;
}