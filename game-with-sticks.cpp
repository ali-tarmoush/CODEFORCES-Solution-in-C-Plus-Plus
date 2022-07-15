/*
 * Problem Link   : https://codeforces.com/problemset/problem/451/A
 * Problem Name   : Game With Sticks
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n>m){
        if(m%2==0)
            cout<<"Malvika";
        else
            cout<<"Akshat";
    }
    else{
        if(n%2==0)
            cout<<"Malvika";
        else
            cout<<"Akshat";
    }
    return 0;
}