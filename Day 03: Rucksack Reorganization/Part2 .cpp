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
    int sc = 0, cnt = 0;
    string s;
    int frq1[123] = {0}, frq2[123] = {0};

    while (cin >> s)
    {
        cnt++;
        bool ok = 0;
        for (int i = 0; i < sz(s) && !ok; i++)
        {
            if (cnt == 1)
                frq1[s[i]]++;
            else if (cnt == 2)
                frq2[s[i]]++;
            else if (cnt == 3 && frq1[s[i]] && frq2[s[i]])
                sc += (s[i] >= 'a' ? s[i] - 'a' + 1 : s[i] - 'A' + 27), ok = 1;
        }

        if (cnt == 3)
        {
            cnt = 0;
            for (int i = 0; i <= 122; i++)
                frq1[i] = frq2[i] = 0;
        }
    }

    cout << sc;
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
