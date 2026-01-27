// 01/27/2026
// Problem Name: A. Team
// https://codeforces.com/problemset/problem/231/A

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t, i, count = 0;
    string arr[100];

    cin >> t;

    while(t--)
    {

    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;

    if(sum>=2)count++;

    }
    cout<<count<<endl;
}
