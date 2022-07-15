/*
 * Problem Link   : https://codeforces.com/problemset/problem/851/A
 * Problem Name   : Vasya the Hipster
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x=0,y=0,c;
    cin>>a>>b;
    while(a!=0 &&b!=0){
        a--;
        b--;
        x++;
    }
    if(a>b)
        c=a;
    else
        c=b;
    while(c>1){
        c-=2;
        y++;
    }
    cout<<x<<" "<<y;
    return 0;
}