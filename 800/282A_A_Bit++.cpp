//03/02/2026

// Problem Name: A. Bit ++
// https://codeforces.com/problemset/problem/282/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, X=0;
    
    cin>>N;

    while (N--)
    {
        string s;

        cin>>s;

        if(s[1] == '+')
        {
            X++;
        }

        else
        X--;

    
    }

    cout<<X;
    
}