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

int check_row(int r, int c)
{
    // all elements left the curr elements in same row

    int cnt0 = 0, cnt1 = 0;
    for (int i = c - 1; i >= 0; i--)
    {
        cnt0++;
        if (v[r][i] >= v[r][c])
            break;
    }

    // all elements right the curr elements in same row
    for (int i = c + 1; i < sz(v[r]); i++)
    {
        cnt1++;
        if (v[r][i] >= v[r][c])
            break;
    }

    return cnt0 * cnt1;
}

int check_col(int r, int c)
{

    int cnt0 = 0, cnt1 = 0;
    // all elements above the curr element in same column
    for (int i = r - 1; i >= 0; i--)
    {
        cnt0++;
        if (v[i][c] >= v[r][c])
            break;
    }
    // all elements below the curr element in same column
    for (int i = r + 1; i < sz(v); i++)
    {
        cnt1++;
        if (v[i][c] >= v[r][c])
            break;
    }

    return cnt0 * cnt1;
}

void Catch_Kadr_fe_ALOLo()
{
    string s;
    int mx = 0;
    while (cin >> s)
        v.push_back(s);

    for (int i = 0; i < sz(v); i++)
        for (int j = 0; j < sz(v[i]); j++)
            mx = max(mx, check_col(i, j) * check_row(i, j));

    cout << mx;
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
