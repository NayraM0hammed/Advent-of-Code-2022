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
map<vector<string>, set<pair<string, int>>> mp;
map<vector<string>, int> Sz;

void Calc_Sz(vector<string> path)
{
    int val = 0;
    for (auto it : mp[path])
        val += it.second;
    
    Sz[path] = val;
   
    while (sz(path) > 1)
    {
        path.pop_back();
        Sz[path] += val, vis.insert(path);
    }
}

void Catch_Kadr_fe_ALOLo()
{
    int ans = 0;

    vector<string> path;
    string curr_dir = "/", s;
    path.push_back(curr_dir);

    while (getline(cin, s))
    {
        vector<string> command;
        string x;
        stringstream ss(s);
        while (ss >> x)
            command.push_back(x);

        if (command[0] == "$")
        {
            if (command[1] == "ls")
                continue;
            if (command[2] == "..")
                path.pop_back(), curr_dir = path.back();
            else
                path.push_back(command[2]), curr_dir = command[2];
        }
        else if (command[0][0] >= '0' && command[0][0] <= '9')
            mp[path].insert({command[1], stoi(command[0])});
    }

    for (auto it : mp)
        Calc_Sz(it.first);

    for (auto it : Sz)
        ans += (it.second * (it.second <= 100000));

    cout << ans;
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
