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

// 4 neighbors

int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};


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
set<pair<int, int>> vis;

struct point
{
    int x, y, cnt;
};

bool valid(int x, int y, int x0, int y0)
{
    return ((x < 0 || x >= sz(v) || y < 0 || y >= sz(v[0]) || vis.find({x, y}) != vis.end() || v[x][y] - v[x0][y0] > 1) == 0);
}

queue<point> q;
int BFS(pair<int, int> p1)
{
    point st;
    while (sz(q))
    {
        st = q.front(), q.pop();
        if (p1.first == st.x && p1.second == st.y)
            return st.cnt;

        for (int i = 0; i < 4; i++)
            if (valid(st.x + dx[i], st.y + dy[i], st.x, st.y))
            {
                vis.insert({st.x + dx[i], st.y + dy[i]});
                q.push({st.x + dx[i], st.y + dy[i], st.cnt + 1});
            }
    }
    return -1;
}

void Catch_Kadr_fe_ALOLo()
{
    pair<int, int> st, ed;
    string s;
    while (cin >> s)
        v.push_back(s);

    for (int i = 0; i < sz(v); i++)
        for (int j = 0; j < sz(v[i]); j++)
        {
            if (v[i][j] == 'S')
                v[i][j] = 'a';

            if (v[i][j] == 'a')
                q.push({i, j, 0}), vis.insert({i, j});

            if (v[i][j] == 'E')
                ed = {i, j}, v[i][j] = 'z';
        }

    cout << BFS(ed);
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
