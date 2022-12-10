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

vector<pair<int, int>> v;

void Adj_Tail_pos(int xH, int yH, int &xT, int &yT)
{
    // Tail touch Head
    if (abs(xH - xT) <= 1 && abs(yH - yT) <= 1)
        return;

    if (xH == xT) // same row
        yT += (yH > yT ? 1 : -1);
    else if (yH == yT) // same col
        xT += (xH > xT ? 1 : -1);
    else if (xH > xT)
    {
        xT++;
        yT += (yH > yT);
        yT -= (yH < yT);
    }
    else if (xH < xT)
    {
        xT--;
        yT += (yH > yT);
        yT -= (yH < yT);
    }
}
void Catch_Kadr_fe_ALOLo()
{

    int xx;
    char op;
    for (int i = 0; i < 10; i++)
        v.push_back({0, 0});

    set<pair<int, int>> vis;

    while (cin >> op >> xx)
        while (xx--)
        {
            v[0].first += (op == 'D');
            v[0].first -= (op == 'U');
            v[0].second += (op == 'R');
            v[0].second -= (op == 'L');

            for (int i = 0; i < 9; i++)
                Adj_Tail_pos(v[i].first, v[i].second, v[i + 1].first, v[i + 1].second);

            vis.insert(v[9]);
        }

    cout << sz(vis);
}

int main()
{
    SADIEM();
    int t = 1;
    //   cin >> t;
    while (t--)
    {
        Catch_Kadr_fe_ALOLo();
        cout << (t ? "\n" : "");
    }
}
