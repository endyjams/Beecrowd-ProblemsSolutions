#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char d;
    
    while (cin >> d >> s && s[0] != '0' && d != '0')
    {
        int flag1 = 0;
        bool f = false;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0' && s[i] != d)
            {
                flag1 = i;
                f = true;
                break;
            }
        }
        
        if (!f)
        {
            cout << '0' << endl;
        } else {
            for (int i = flag1; i < s.size(); i++)
            {
                if (s[i] != d) cout << s[i];
            }
            
            cout << endl;
        }
    }
    
    return 0;
}