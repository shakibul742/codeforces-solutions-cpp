// 2026-02-17
// Problem name: A. Stones on the Table
// https://codeforces.com/problemset/problem/266/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0;
    string s;

    cin >> n;
    cin >> s;

    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            count++;
        }
        
    }

    cout << count;
}