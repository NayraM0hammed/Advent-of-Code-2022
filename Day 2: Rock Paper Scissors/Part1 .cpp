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
    char p1, p2;
    int sc = 0;
  
  while (cin >> p1 >> p2)
    {
        sc += (p2 - 'X' + 1);
        sc += (3 * ((p1 == 'A' && p2 == 'X') || (p1 == 'B' && p2 == 'Y') || (p1 == 'C' && p2 == 'Z')));
        sc += (6 * ((p1 == 'A' && p2 == 'Y') || (p1 == 'B' && p2 == 'Z') || (p1 == 'C' && p2 == 'X')));
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
