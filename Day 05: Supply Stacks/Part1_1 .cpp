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
    map<char, deque<char>> mp;

    while (getline(cin, s))
    {
        if (s[0] != 'm')
        {
            if (s[0] == ' ')
                continue;
            char id = '1';
            for (int i = 1; i < sz(s); i += 4, id++)
                if (s[i] != ' ')
                    mp[id].push_back(s[i]);
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
                    mp[to].push_front(mp[from].front()), mp[from].pop_front();
        }
    }

    for (auto it : mp)
        if (sz(it.second))
            ans += it.second.front();

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
