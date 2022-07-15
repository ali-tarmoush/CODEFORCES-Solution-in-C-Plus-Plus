/*
 * Problem Link   : https://codeforces.com/problemset/problem/1154/A
 * Problem Name   : Restoring Three Numbers
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    long long  MAX = max(x4,max(x3,max(x2,x1)));
    if(MAX>x1)
        cout<<MAX-x1<<" ";
    if(MAX>x2)
        cout<<MAX-x2<<" ";
    if(MAX>x3)
        cout<<MAX-x3<<" ";
    if(MAX>x4)
        cout<<MAX-x4<<" ";
    return 0;
}