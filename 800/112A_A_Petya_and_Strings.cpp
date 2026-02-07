// 2026-02-07
// Problem name: A. Petya and Strings
// https://codeforces.com/problemset/problem/112/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for(int i = 0; i < s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    if(s1 < s2) cout << -1;
    else if(s1 > s2) cout << 1;
    else cout << 0;
}