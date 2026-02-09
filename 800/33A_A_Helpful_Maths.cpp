// 2026-02-09
// Problem name: A. Helpful Maths
// https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
        if(s[i] != '+')
            t += s[i];

    sort(t.begin(), t.end());

    for(int i = 0; i < t.size(); i++)
    {
        cout << t[i];
        if(i + 1 < t.size())
            cout << "+";
    }
}
