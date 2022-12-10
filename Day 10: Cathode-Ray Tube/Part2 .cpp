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
char arr[6][40];
void Catch_Kadr_fe_ALOLo()
{
    int x = 1, val;
    string s;
    vector<int> X_vals;
    X_vals.push_back(1);
    while (cin >> s)
    {
        X_vals.push_back(x);
        if (s == "addx")
            cin >> val, x += val, X_vals.push_back(x);
    }

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 40; j++)
        {
            if (abs(X_vals[i * 40 + j] - j) <= 1)
                arr[i][j] = '#';
            else
                arr[i][j] = ' ';
        }

    for (int i = 0; i < 6; cout << "\n", i++)
        for (int j = 0; j < 40; j++)
            cout << arr[i][j];
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
