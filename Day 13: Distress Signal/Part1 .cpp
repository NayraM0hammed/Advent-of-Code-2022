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
    //   freopen("output.txt", "w", stdout);

    std::ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}

/*

 “ I’d like to let you in on a very important secret I learned when I was about your age, boy.
 You see, power, real power doesn’t come to those who were born strongest or fastest or smartest.
 No. It comes to those who will do anything to achieve it.”

*/

bool NUM(char x)
{
    return x >= '0' && x <= '9';
}

bool Compare_Packets(string l, string r)
{
    int i = 0, j = 0;
    while (i < sz(l) && j < sz(r))
    {
        if (NUM(l[i]) && NUM(r[j]))
        {
            int val1 = 0, val2 = 0;
            while (NUM(l[i]))
                val1 *= 10, val1 += (l[i] - '0'), i++;
            while (NUM(r[j]))
                val2 *= 10, val2 += (r[j] - '0'), j++;

            if (val1 < val2)
                return true;
            if (val1 > val2)
                return false;
        }
        else if (l[i] == r[j])
            i++, j++;
        else if (l[i] == ']')
            return true;
        else if (r[j] == ']')
            return false;
        else if (l[i] == ',' || l[i] == '[')
            i++;
        else if (r[j] == ',' || r[j] == '[')
            j++;
    }

    return true;
}

void Catch_Kadr_fe_ALOLo()
{
    int ans = 0, id = 0;
    string a, b;

    while (++id && cin >> a >> b)
        if (Compare_Packets(a, b))
            ans += id;

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
