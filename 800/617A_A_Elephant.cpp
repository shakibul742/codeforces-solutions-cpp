// 2026-02-11
// Problem name: A. Elephant
// https://codeforces.com/problemset/problem/617/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, result = 0;

    cin >> num;

    result = num / 5;

    if(num % 5 != 0)
    {
        result = result + 1;
    }

    cout << result << endl;
}