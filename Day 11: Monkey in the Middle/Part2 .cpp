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
const ll Mod = 1e9 + 7, INF = 1e18;
const ll N = 2e5 + 1, O_O = LONG_LONG_MAX, T_T = INT_MAX, V_V = INT_MIN;
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> Set;
typedef tree<pair<int, int>, null_type, greater_equal<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> Or_Set;
*/
// 8 neighbors

int Dx[] = {-1, -1, -1, 0, 0, 1, 1, 1}; // Knight_mov:2, 1, -1, -2, -2, -1, 1, 2
int Dy[] = {-1, 0, 1, -1, 1, -1, 0, 1}; // 1, 2, 2, 1, -1, -2, -2, -1

// 4 neighbors

int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};

string dir = "LRDU";
//"Look deep into your soul, into the dark and foggy mist of your memories"

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

ll update(string s, ll val)
{
    stringstream ss(s);
    string x;
    ll val0 = val;
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
    priority_queue<ll> pq;  // max_inspections
    map<int, queue<ll>> mp; // values;
    map<int, monkey> mp1;   // divide,conditions,inspections
    int id = 0, r = 10000;
    ll ans, M = 1;
    bool fst, snd;
    fst = snd = 0;
    string s;

    // Processing Input
    while (getline(cin, s))
    {
        if (s[0] == 'M')
            continue;

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
                mp1[id].div = stoi(x), M *= mp1[id].div;
            else if (!snd && fst && x[0] >= '0' && x[0] <= '9')
                mp1[id].t = stoi(x);
            else if (snd && x[0] >= '0' && x[0] <= '9')
                mp1[id].f = stoi(x);
        }

        if (fst && snd)
            id++, fst = snd = 0;
    }

    // Actual rounds

    r = 10000;
    while (r--)
        for (int i = 0; i < id; i++)
            while (sz(mp[i]))
            {
                ll val = mp[i].front();
                mp[i].pop();
                val = update(mp1[i].op, val);
                val %= M;
                if (!(val % mp1[i].div))
                    mp[mp1[i].t].push(val);
                else
                    mp[mp1[i].f].push(val);
                mp1[i].ins++;
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
