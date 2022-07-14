/*
 * Problem Link   : https://codeforces.com/problemset/problem/1328/A
 * Problem Name   :  Divisibility Problem
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int a, b;
        cin>>a>>b;
        if(a % b==0)
        cout<<0<<endl;
        else
        cout<<b*(a/b+1) - a <<endl;
    }
    return 0;
}