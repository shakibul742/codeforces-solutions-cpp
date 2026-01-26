// 01-22-2026
// Problem Name: A. Football
// https://codeforces.com/problemset/problem/96/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        int count = 0;

        if(str[i] == '0')
        {
            while(i < str.length() && str[i] == '0')
            {
                count++;
                i++;
            }
        }
        else
        {
            while(i < str.length() && str[i] == '1')
            {
                count++;
                i++;
            }
        }

        if(count >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }

        i--; 
    }

    cout << "NO" << endl;
    return 0;
}
