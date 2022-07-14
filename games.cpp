/*
 * Problem Link   : https://codeforces.com/problemset/problem/268/A
 * Problem Name   : Games
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
const int MAX=35;
int h[MAX];
int a[MAX];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>h[i]>>a[i];
    int k=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(h[i]==a[j]&&i!=j)
        k++;
    cout<<k;
    return 0;
}