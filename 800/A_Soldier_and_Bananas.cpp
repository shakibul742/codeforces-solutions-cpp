// 2026-02-18
// Problem name: A. Soldier and Bananas
// https://codeforces.com/problemset/problem/546/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, borrow_amount, total_cost = 0;

    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++)
    {
       total_cost += i * k;
    }

    borrow_amount = total_cost - n;

    if(borrow_amount < 0)
    {
        cout << 0;
    }

    else{
        cout << borrow_amount;
    }
    return 0;
}