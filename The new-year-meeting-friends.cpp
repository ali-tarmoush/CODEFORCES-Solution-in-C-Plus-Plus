/*
 * Problem Link   : https://codeforces.com/problemset/problem/723/A
 * Problem Name   : The New Year: Meeting Friends
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
    int x[5];
    cin>>x[0]>>x[1]>>x[2];
    sort(x,x+3);
    cout<<x[2]-x[0];
    return 0;
}