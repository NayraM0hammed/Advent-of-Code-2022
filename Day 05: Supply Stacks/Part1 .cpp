//"Perhaps..,we 're asking the wrong questions .." -Agent Brown
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <unordered_map>
#define sz(s) (int(s.size()))
#define MemS(s, x) memset(s, x, sizeof(s))
#define PI acos(-1)
typedef long long ll;
using namespace std;

void SADIEM()
{
    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);

    std::ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}

/*

 “ I’d like to let you in on a very important secret I learned when I was about your age, boy.
 You see, power, real power doesn’t come to those who were born strongest or fastest or smartest.
 No. It comes to those who will do anything to achieve it.”

*/
void Catch_Kadr_fe_ALOLo()
{
    string ans = "", s;
    bool ok = 0;
    map<char, stack<char>> mp;
    
    while (getline(cin, s))
    {
        if (s[0] >= '0' && s[0] <= '9')
        {
            for (int i = 1; i < sz(s); i++)
                if (s[i] != ' ')
                    mp[s[0]].push(s[i]);
        }
        else
        {
            char from = 'a', to = 'a';
            string x;
            int tot = -1;
            stringstream ss(s);

            while (ss >> x)
                if (x[0] >= '0' && x[0] <= '9')
                {
                    if (tot == -1)
                        tot = stoi(x);
                    else if (from == 'a')
                        from = x[0];
                    else
                        to = x[0];
                }

            if (tot != -1)
                while (tot-- && sz(mp[from]))
                    mp[to].push(mp[from].top()), mp[from].pop();
        }
    }

    for (auto it : mp)
        if (sz(it.second))
            ans += it.second.top();
    
    cout << ans;
}

int main()
{
    SADIEM();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        Catch_Kadr_fe_ALOLo();
        cout << (t ? "\n" : "");
    }
}
