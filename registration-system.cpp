/*
 * Problem Link   : https://codeforces.com/problemset/problem/4/C
 * Problem Name   : Registration system
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
map<string, int> m;
int main(){
    int n;
    cin>>n;
    string s;
    while (n--)
    {
        cin >> s;
        if (m.count(s) == 0){
            cout << "OK" << endl;
            m[s] = 1;
        }
        else{
            cout << s << m[s] << endl;
            m[s] += 1;
        }
    }
    return 0;
}
