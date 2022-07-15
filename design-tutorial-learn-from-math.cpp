/*
 * Problem Link   : https://codeforces.com/problemset/problem/472/A
 * Problem Name   : Design Tutorial: Learn from Math
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << n - 4 << " 4";
    else
        cout << n - 9 << " 9";
    return 0;
}