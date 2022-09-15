#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    
    while (scanf("%d", &n) != EOF)
    {
        vector <int> v(n);
        ll one = 0, other = 0;
        
        for (int i = 0; i < n; i++) scanf("%d", &v[i]);
        
        int i = 0, j = n-1;
        
        while (i <= j)
        {
            if (abs((other+v[j])-one) <= abs(other-(one+v[i])))
            {
                other += v[j];
                j--;
            } else {
                one += v[i];
                i++;
            }
        }
        
        cout << abs(other-one) << endl;
    }
    return 0;
}