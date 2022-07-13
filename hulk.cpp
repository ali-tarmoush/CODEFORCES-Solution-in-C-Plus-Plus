/*
 * Problem Link   : https://codeforces.com/problemset/problem/705/A
 * Problem Name   : Hulk
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            cout << "I hate ";
        else
            cout << "I love ";
        if (i != n - 1)
            cout << "that ";
        else
            cout << "it ";
    }
    return 0;
}