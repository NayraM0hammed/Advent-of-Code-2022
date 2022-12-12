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

struct monkey
{
    int div, t, f, ins = 0;
    string op;
};

int update(string s, int val)
{
    stringstream ss(s);
    string x;
    int val0 = val;
    bool add, sub, mul, div;
    add = sub = mul = div = 0;
    while (ss >> x)
    {
        if (x == "==" || x == "new")
            continue;
        add |= (x == "+");
        sub |= (x == "-");
        mul |= (x == "*");
        div |= (x == "/");
        if (x[0] >= '0' && x[0] <= '9')
            val0 = stoi(x);
    }
    if (add)
        val += val0;
    if (sub)
        val -= val0;
    if (mul)
        val *= val0;
    if (div)
        val /= val0;
    return val;
}

int to_int(string x)
{
    int val = 0;

    for (int i = 0; i < sz(x); i++)
        if (x[i] >= '0' && x[i] <= '9')
            val *= 10, val += (x[i] - '0');
    return val;
}

void Catch_Kadr_fe_ALOLo()
{
    priority_queue<int> pq;  // max_inspections
    map<int, queue<int>> mp; // values;
    map<int, monkey> mp1;    // divide,conditions,inspections
    int id = 0, r = 20, ans, cnt = 0;
    bool fst, snd;
    fst = snd = 0;
    string s;

    // Processing Input
    while (getline(cin, s))
    {
        if (s[0] == 'M')
        {
            cnt++;
            continue;
        }

        stringstream ss(s);
        string x;

        bool st, op, ts;
        st = op = ts = 0;

        while (ss >> x)
        {
            st |= (x == "Starting");
            op |= (x == "Operation:");
            ts |= (x == "Test:");
            fst |= (x == "true:");
            snd |= (x == "false:");

            if (st && x[0] >= '0' && x[0] <= '9')
                mp[id].push(to_int(x));
            else if (op)
                mp1[id].op += " " + x;
            else if (ts && x[0] >= '0' && x[0] <= '9')
                mp1[id].div = stoi(x);
            else if (!snd && fst && x[0] >= '0' && x[0] <= '9')
                mp1[id].t = stoi(x);
            else if (snd && x[0] >= '0' && x[0] <= '9')
                mp1[id].f = stoi(x);
        }

        if (fst && snd)
            id++, fst = snd = 0;
    }

    // Actual rounds
    while (r--)
    {
        for (int i = 0; i < id; i++)
            while (sz(mp[i]))
            {
                int val = mp[i].front();
                mp[i].pop();
                val = update(mp1[i].op, val);
                val /= 3;
                if (!(val % mp1[i].div))
                    mp[mp1[i].t].push(val);
                else
                    mp[mp1[i].f].push(val);
                mp1[i].ins++;
            }
    }

    for (auto it : mp1)
        pq.push(it.second.ins);

    ans = pq.top();
    pq.pop();
    ans *= pq.top();

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
