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
vector<string> v;

bool check_row(int r, int c)
{
    bool ok1 = 0, ok2 = 0;
    // all elements left the curr elements in same row
    for (int i = 0; i < c; i++)
        ok1 |= (v[r][i] >= v[r][c]);

    // all elements right the curr elements in same row
    for (int i = c + 1; i < sz(v[r]); i++)
        ok2 |= (v[r][i] >= v[r][c]);

    return (ok1 == 0) | (ok2 == 0);
}

bool check_col(int r, int c)
{
    bool ok1 = 0, ok2 = 0;

    // all elements above the curr element in same column
    for (int i = 0; i < r; i++)
        ok1 |= (v[i][c] >= v[r][c]);

    // all elements below the curr element in same column
    for (int i = r + 1; i < sz(v); i++)
        ok2 |= (v[i][c] >= v[r][c]);

    return (ok1 == 0) | (ok2 == 0);
}

void Catch_Kadr_fe_ALOLo()
{
    string s;
    int cnt = 0;
    while (cin >> s)
        v.push_back(s);

    for (int i = 0; i < sz(v); i++)
        for (int j = 0; j < sz(v[i]); j++)
            cnt += ((check_col(i, j) != 0) || (check_row(i, j) != 0));

    cout << cnt;
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
