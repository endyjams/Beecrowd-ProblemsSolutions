#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    while (cin >> n)
    {
        vector <int> v(n), ans(n);
        vector<unordered_map<string,int>> tmp;
        
        for (int i = 0; i < n; i++) cin >> v[i];
        
        for (int i = 0; i < n; i++)
        {
            while (tmp.size() && tmp[tmp.size()-1]["value"] < v[i])
            {
                unordered_map<string,int> x = tmp[tmp.size()-1];
                tmp.pop_back();
                ans[x["idx"]] = v[i];
            }
            
            unordered_map<string,int> x;
            x["value"] = v[i];
            x["idx"] = i;
            
            tmp.push_back(x);
        }
        
        while (tmp.size())
        {
            unordered_map<string,int> x = tmp[tmp.size()-1];
            ans[x["idx"]] = -1;
            tmp.pop_back();
        }
        
        for (int i = 0; i < n; i++)
        {
            if (i) cout << " ";
            
            if (ans[i] == -1)
            {
                cout << "*";
            } else {
                cout << ans[i];
            }
        }
        
        cout << endl;
    }
}